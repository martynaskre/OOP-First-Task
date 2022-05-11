//
// Created by Martynas Skrebė on 2022-02-09.
//

#ifndef INC_1_UZD_STUDENT_H
#define INC_1_UZD_STUDENT_H


#include <string>
#include <vector>
#include "Human.h"

/**
 * Student is derived from Human class and is responsible for adding additional properties to human object.
 */
class Student: public Human {
    constexpr static const double AVERAGE_WEIGHT = 0.4;
    constexpr static const double EXAM_WEIGHT = 0.6;

    std::vector<int> homeworks;
    int examResult;

public:
    void f() override;

    Student();
    Student(const Student &other);
    Student &operator=(const Student &other);
    ~Student();

    void setHomeworkResult(int mark);
    void setHomeworkResults(std::vector<int> homeworks);
    void setExamResult(int mark);

    std::vector<int> getHomeworkResults();
    int getExamResult();

    double calculateHomeworkAverage();
    double calculateHomeworkMedian();
    double calculateResult(double homeworkMark);

    static bool studentSorter(Student student1, Student student2);

    static Student generateStudent(int homeworksCount);
};


#endif //INC_1_UZD_STUDENT_H
