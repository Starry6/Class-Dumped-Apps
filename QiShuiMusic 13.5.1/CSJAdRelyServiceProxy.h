@interface CSJAdRelyServiceProxy : NSObject
+ (void)applogWithEventData:;
+ (void)logWithLevel:tag:content:;
+ (void)statsWithEventData:;
@end
