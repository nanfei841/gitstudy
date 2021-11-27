#include "stm32f10x.h"
#include "led.h"
#include "delay.h"

 
int main(void)
 {	
  LED_Init();
	delay_init();
	 while(1)
	 {
		 LED0=!LED0;
		 delay_ms(500);
	 }
	 
 }


 
//输入捕获
//#include "led.h"
//#include "delay.h"
//#include "sys.h"
//#include "timer.h"
//#include "usart.h"

//extern u8  TIM2CH1_CAPTURE_STA;		//输入捕获状态		    				
//extern u16	TIM2CH1_CAPTURE_VAL;	//输入捕获值
// int main(void)
// {	
//	 
//	u32 temp=0; 
//	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);// 设置中断优先级分组2
//	delay_init();	    	 //延时函数初始化	
//	uart_init(9600);	 			//9600	 
//	LED_Init();		  	//初始化与LED连接的硬件接口
// 	TIM1_PWM_Init(899,0); 			//不分频。PWM频率=72000/(899+1)=80Khz
// 	TIM2_Cap_Init(0XFFFF,72-1);		//以1Mhz的频率计数 
//   	while(1)
//	{
// 		delay_ms(10);
//		TIM_SetCompare1(TIM1,TIM_GetCapture1(TIM1)+1);
//		if(TIM_GetCapture1(TIM1)==300)TIM_SetCompare1(TIM1,0);		 
//		if(TIM2CH1_CAPTURE_STA&0X80)//成功捕获到了一次高电平
//		{
//			temp=TIM2CH1_CAPTURE_STA&0X3F;
//			temp*=65536;					//溢出时间总和
//			temp+=TIM2CH1_CAPTURE_VAL;		//得到总的高电平时间
//			printf("HIGH:%d us\r\n",temp);	//打印总的高点平时间
// 			TIM2CH1_CAPTURE_STA=0;			//开启下一次捕获
// 		}
//	}
//}


//pwm实验
// int main(void)
// {	
//	u16 led0pwmval=0;    
//	u8 dir=1;	
//	delay_init();	    	 //延时函数初始化	  
//	LED_Init();		  	//初始化与LED连接的硬件接口
//	TIM1_PWM_Init(799,0);//不分频。PWM频率=72000/(899+1)=80Khz 
//   	while(1)
//	{
// 		delay_ms(10);	 
//		if(dir)led0pwmval++;
//		else led0pwmval--;	 
// 		if(led0pwmval>300)dir=0;
//		if(led0pwmval==0)dir=1;	   					 
//		TIM_SetCompare1(TIM1,led0pwmval);	   
//	} 
//}

