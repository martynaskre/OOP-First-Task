//
// Created by Martynas Skrebė on 2022-05-11.
//

#include "gtest/gtest.h"
#include "Student.h"

TEST(Student, calculateHomeworkAverage) {
    Student student;

    student.setHomeworkResults(std::vector<int> { 4, 5, 6 });
    student.setExamResult(10);

    double average = student.calculateHomeworkAverage();

    // (0.4 * AVG(4, 5, 6)) + (0.6 * 10) = 2 + 6
    EXPECT_EQ(average, 8);
}

TEST(Student, calculateHomeworkMedian) {
    Student student;

    student.setHomeworkResults(std::vector<int> { 4, 5, 6 });

    double median = student.calculateHomeworkMedian();

    EXPECT_EQ(median, 5);
}

TEST(Student, calculateResultWithMedian) {
    Student student;

    student.setHomeworkResults(std::vector<int> { 4, 5, 6 });
    student.setExamResult(10);

    double result = student.calculateResult(student.calculateHomeworkMedian());

    // (0.4 * 5) + (0.6 * 10) = 2 + 6
    EXPECT_EQ(result, 8);
}
