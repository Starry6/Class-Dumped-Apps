@interface VCVTPWrapper : NSObject
+ (id)targetQueue;
+ (void)startVTP;
+ (void)stopVTP;
+ (id)connectionContext;
@end
