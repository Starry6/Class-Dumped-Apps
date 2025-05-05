@interface CVML_Error : NSObject
+ (id)createNSErrorWithStatus:andMessage:;
+ (id)createNSExceptionWithStatus:andMessage:;
@end
