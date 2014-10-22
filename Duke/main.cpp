#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/splash.png"));
    splash->show();
    MainWindow w;
    w.showMaximized();
    w.show();
    splash->finish(&w);
    delete splash;
    return a.exec();
}

/***************************************************
 * 截止到2014-10-12日以前的工作汇总：
 * 实现功能：新建工程（即选择一个空的文件夹作为图片的存放目录）
 * 打开摄像头，能够实时预览图像以及对在校准过程中采集的图像进行预览，保存图像到指定文件夹
 * 开关投影仪，其中关投影通过投射黑色图像实现
 * 投射条纹图像，投射窗口由OpenCV生成
 * 采集扫描图像并保存
 * 设置工作过程中可能用到的全局变量并写入xml文件
 * ***************************************************
 * 10-13
 * 对文件存放路径的生成进行了调整，新建工程直接生成calib、reconstruction、scan三个文件夹
 * 通过选择文件夹函数selectPath选择当前存储路径projChildPath
 * 对配置文件set.xml的存储进行了调整，储存在工程根目录下
 * 自定义类调用时，应防止头文件相互包含，可以采用前置声明方式
 * 目前将set作为参数储存库，有些参数不需要手工设置，应在初始化时自动设置
 * *****************************************************
 * 10-18
 * 完成了重建相关代码的添加，构建无错误
 * *****************************************************
 * 10-19
 * 优化reconstruct类代码
 * *****************************************************
 * 10-20
 * 成功将大恒相机移植到Qt环境，对rawbuffer的调取没有采用callback函数，而是通过定时器触发信号槽的形式
 * 对QImage*指针指向图片的操作，应首先将其转换为QPixmap，再进行缩放、变形等操作
 *
 *
 *
 *
 *
 *
 *
 *
 */