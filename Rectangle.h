#ifndef RECTANGLE_H
#define RECTANGLE_H

/**
 * @class Rectangle
 * @brief Lớp biểu diễn hình chữ nhật.
 *
 * Lớp này dùng để lưu chiều dài, chiều rộng của hình chữ nhật
 * và cung cấp các hàm tính chu vi, diện tích.
 */
class Rectangle
{
private:
    double length;   ///< Chiều dài
    double width;    ///< Chiều rộng

public:

    /**
     * @brief Constructor khởi tạo hình chữ nhật.
     *
     * @param l Chiều dài.
     * @param w Chiều rộng.
     *
     * @throw Không phát sinh ngoại lệ.
     */
    Rectangle(double l = 1, double w = 1);

    /**
     * @brief Tính chu vi hình chữ nhật.
     *
     * Công thức:
     * P = 2 × (length + width)
     *
     * @return Chu vi hình chữ nhật.
     */
    double perimeter() const;

    /**
     * @brief Tính diện tích hình chữ nhật.
     *
     * Công thức:
     * S = length × width
     *
     * @return Diện tích hình chữ nhật.
     */
    double area() const;

};

#endif
