#include "labhelper.h"


// ���������������� ����������� ���������� ����� � .cpp ������
// �������� � id = 10000
int PairIdComponent::count = 10000;



std::string LabHelper::IntToString( int value )
{
    std::stringstream ss;
    ss << value;
    return ss.str();
}

int LabHelper::StrToInt( std::string str )
{
    return atoi( str.c_str() );
}

LabHelper::LabHelper()
{

}