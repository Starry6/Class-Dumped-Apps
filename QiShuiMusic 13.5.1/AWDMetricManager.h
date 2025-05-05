@interface AWDMetricManager : NSObject
+ (void)postMetricWithId:integerValue:;
+ (void)postMetricWithId:;
+ (void)postMetricWithId:boolValue:;
+ (void)postMetricWithId:unsignedIntegerValue:;
+ (void)postMetricWithId:stringValue:;
+ (void)postMetricWithId:numberValue:;
+ (void)postMetricWithId:object:;
@end
