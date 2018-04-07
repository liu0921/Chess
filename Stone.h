#ifndef STONE_H
#define STONE_H
#include<QString>

class Stone
{
public:
    Stone();
    enum TYPE{JIANG,CHE,PAO,MA,BING,SHI,XIANG};
    int _row;
    int _col;
    int _id;
    bool _dead;
    bool _red;
    TYPE _type;

    QString getText()
    {
        switch (this->_type) {
        case JIANG:
            return "将";
        case CHE:
            return "车";
        case PAO:
            return "炮";
        case MA:
            return "马";
        case BING:
            return "兵";
        case SHI:
            return "士";
        case XIANG:
            return "象";

        default:
            break;
        }
        return "错误";
    }

};

#endif // STONE_H
