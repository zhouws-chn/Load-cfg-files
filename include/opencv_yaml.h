#ifndef __CONFIG_H__
#define __CONFIG_H__

#include <iostream>
#include <memory>
#include <opencv2/core/core.hpp>

class Config
{
private:
    static std::shared_ptr<Config> config_;
    cv::FileStorage file_;

    Config() {} // private constructor makes a singleton
public:
    ~Config();
    
    // set a new config file
    static void setParameterFile( const std::string& filename );

    // access the parameter values
    template< typename T>
    static T get( const std::string& key )
    {
        return T(Config::config_->file_[key]);
    }
};


#endif // !__CONFIG_H__
