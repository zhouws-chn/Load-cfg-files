#include "opencv_yaml.h"

int main( int argc, char **argv )
{
    if( argc !=2 ){
        // ../bin/test_opencv_yaml ../config/test.yaml
        std::cout<<"Uase: ./test_config test_params_file"<<std::endl;
        return -1;
    }

    std::cout<<argv[1]<<std::endl;

    Config::setParameterFile( argv[1] );
    double param1 = Config::get<double>("param1");
    std::cout<< param1 <<std::endl;
    return 0;
}
