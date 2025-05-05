@interface IESSaaSTIMPBRequestSerializer : NSObject
+ (void)fillBinaryRequest:withPBRequest:;
+ (void)fillJSONRequest:withPBRequest:;
+ (void)fillRequest:withPBRequest:;
@end
