@interface C2Metric : NSObject
+ (id)generateDeviceInfo;
+ (id)generateGenericEventWithName:genericMetricType:startTime:endTime:attributes:;
+ (id)generateError:;
@end
