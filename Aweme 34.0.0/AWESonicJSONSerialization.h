@interface AWESonicJSONSerialization : NSObject
+ (id)JSONObjectWithData:option:core:error:;
+ (id)JSONObjectWithString:option:core:error:;
+ (id)JSONObjectWithData:error:;
+ (id)JSONObjectWithString:error:;
+ (void)_aweLazyRegisterLoad_AWEMicroApp;
@end
