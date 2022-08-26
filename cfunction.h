#include <cmath>
#include <string>
using std::string;
const unsigned long long inf=0x7ffffffff;

template<typename T>inline long double maxof(T __firstInput,T __secondInput){		//返回两数中的较大值 
	return (__firstInput>__secondInput?__firstInput:__secondInput);
}
template<typename T>inline long double minof(T __firstInput,T __secondInput){		//返回两数中的较小值 
	return (__firstInput<__secondInput?__firstInput:__secondInput);
}
template<typename T>inline long double sumof(T N1,T N2){
	return N1+N2;
}
template<typename T>inline void swapp(T &a,T &b){
	T temp=a;a=b;b=temp;
}
template<typename T>inline int  comparee(T a,T b){
	return (a>b?1:(a==b?0:-1));
}
template<typename T>inline bool isEaqual(T a,T b){
	return a==b;
}

inline bool isLetter(char c){
	return (c>='a'&& c<='z' || c>='A' && c<='Z');
}
inline bool isLetterSmall(char c){
	return (c>='a' && c<='z');
}
inline bool isLetterBig(char c){
	return (c>='A' && c<='Z');
}
inline bool isNumber(char c){
	return (c>='0' && c<='9');
}

unsigned long long to_num(string __tag){
	unsigned long long __record=0;
	for(int i=0;i<__tag.size();i++)  __record+=pow(10,__tag.size()-1-i)*(__tag[i]-'0');
	return __record;
}

template<class XType,class YType>class crdinate{			//用于构建坐标系 
	private:
		XType __Xpos=0;				//用于存储X坐标，下为Y坐标 
		YType __Ypos=0;
		long double tmp_betw=0;
		long double err_return=0.00;
	public:
		crdinate(void){		}
		crdinate(XType __Give_X,YType __Give_Y){this->__Xpos=__Give_X;this->__Ypos=__Give_Y;}
		void set(XType __Give_X,YType __Give_Y){this->__Xpos=__Give_X;this->__Ypos=__Give_Y;}
		void set_X(XType __Give_X){this->__Xpos=__Give_X;}
		void set_Y(YType __Give_Y){this->__Ypos=__Give_Y;}
		inline XType get_X(void){return this->__Xpos;}
		inline YType get_Y(void){return this->__Ypos;}
		crdinate get(void){return *this;}
		inline long double distance_between(crdinate __other){tmp_betw=sqrt((this->__Xpos-__other.__Xpos)*(this->__Xpos-__other.__Xpos)+(this->__Ypos-__other.__Ypos)*(this->__Ypos-__other.__Ypos));return tmp_betw;}
		inline bool operator==(const crdinate __anthr){return (this->__Xpos==__anthr.__Xpos && this->__Ypos==__anthr.__Ypos);}
		inline bool operator<=(const crdinate __anthr){return (this->__Xpos<=__anthr.__Xpos && this->__Ypos<=__anthr.__Ypos);}
		inline bool operator>=(const crdinate __anthr){return (this->__Xpos>=__anthr.__Xpos && this->__Ypos>=__anthr.__Ypos);}
		inline XType operator[](int __get){if(__get>2 || __get<0) return 0;if(__get==0) return this->__Xpos;else return this->__Ypos;}
};
