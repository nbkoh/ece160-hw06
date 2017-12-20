#include "Student.h"
#include <iostream>

Student::Student(std::string fn, std::string ln, int y, Major m)
{
  _first_name = fn;
  _last_name = ln;
  _grad_year = y;
  _major = m;
}

Student::~Student() {}

float Student::getGpa()
{
  float gpa = 0;
  int size = _grades.size();
  
  for(int i = 0; i<size ; i++)
  {
    gpa = gpa + _grades[i];
  }
  
  if(gpa!=0)
  {
    gpa = gpa/size;
  }
  return gpa;
}

void Student::addGrade(float grade)
{
  _grades.push_back(grade);
}

std::string Student::majorString(Major m)
{
  switch(m)
  {
    case Major::EE:
      return "EE";
      break;
     
    case Major::ME:
      return "ME";
      break;
      
    case Major::CE:
      return "CE";
      break;
      
    case Major::CHE:
      return "CHE";
      break;
      
    case Major::BSE:
      return "BSE";
      break;
      
    case Major::ART:
      return "ART";
      break;
      
    case Major::ARCH:
      return "ARCH";
      break;

  }
}

const std::string& Student::getLastName()
{
  return _last_name;
}

void Student::printInfo()
{
  printf("%s, %s\n", _last_name.c_str(), _first_name.c_str());
  printf("%s %d\n", majorString(_major).c_str(), _grad_year);
  float gpa = getGpa();
  printf("GPA: %.2f\n", gpa);
}


