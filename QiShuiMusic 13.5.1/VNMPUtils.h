@interface VNMPUtils : NSObject
+ (double)getHostTime;
+ (unsigned long long)getHostTimeInNanos;
+ (id)createErrorWithCode:andMessage:;
+ (void)freeVImageBuffer:;
+ (long long)parseExifTimestamp:;
@end
