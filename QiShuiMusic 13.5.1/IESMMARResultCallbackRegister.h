@interface IESMMARResultCallbackRegister : NSObject
+ (BOOL)isPreferredUsingBuildinAR;
+ (void)registerSupportedCallbacks;
+ (void)setPreferredUsingBuildinAR:;
+ (void)registerCallbacks;
@end
