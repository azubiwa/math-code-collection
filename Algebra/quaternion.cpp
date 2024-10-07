#include <iostream>

// 配列の形で四元数を持つ
std::vector<float> quat(4);

// 四元数の足し算
std::vector<float> sum(std::vector<float> quat_a, std::vector<float> quat_b)
{
    std::vector<float> return_quat;
    for (int i = 0; i < 4; i++)
    {
        return_quat[i] = (quat_a[i] + quat_b[i]);
    }
    return return_quat;
}