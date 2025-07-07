#include <iostream>
#include <vector>

// 配列の形で四元数を持つ
std::vector<float> quat(4);

// 四元数の足し算
std::vector<float> sum(std::vector<float> quat_a, std::vector<float> quat_b)
{
    std::vector<float> return_quat(4);
    for (int i = 0; i < 4; i++)
    {
        return_quat[i] = (quat_a[i] + quat_b[i]);
    }
    return return_quat;
}

// 四元数の掛け算
std::vector<float> time(std::vector<float> quat_a, std::vector<float> quat_b) {
    std::vector<float> return_quat(4);
    return_quat[0] = quat_a[0] * quat_b[0] - quat_a[1] * quat_b[1] - quat_a[2] * quat_b[2] - quat_a[3] * quat_b[3];
    return_quat[1] = quat_a[0] * quat_b[1] + quat_a[1] * quat_b[0] + quat_a[2] * quat_b[3] - quat_a[3] * quat_b[2];
    return_quat[2] = quat_a[0] * quat_b[2] + quat_a[2] * quat_b[0] - quat_a[1] * quat_b[3] + quat_a[3] * quat_b[1];
    return_quat[3] = quat_a[0] * quat_b[3] + quat_a[3] * quat_b[0] + quat_a[1] * quat_b[2] - quat_a[2] * quat_b[1];
    return return_quat;
}

int main(){
  quat = {1, 2, 3, 4};
  std::vector<float> s_quat = sum(quat, quat);
  std::vector<float> t_quat = time(quat, quat);
  std::cout << s_quat[0] << " + " << s_quat[1] << "i + " << s_quat[2] << "j + " << s_quat[3] << "k" << std::endl;
  std::cout << t_quat[0] << " + " << t_quat[1] << "i + " << t_quat[2] << "j + " << t_quat[3] << "k" << std::endl;
}