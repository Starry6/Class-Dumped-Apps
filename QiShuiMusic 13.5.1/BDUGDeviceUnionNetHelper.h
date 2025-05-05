@interface BDUGDeviceUnionNetHelper : NSObject
+ (id)p_getValueInDictionary:withKey:;
+ (void)__logEvent:params:response:;
+ (void)requestForJSONWithURL:params:method:header:callback:;
@end
