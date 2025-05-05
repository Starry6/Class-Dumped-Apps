@interface ADSignpostUtils : NSObject
+ (void)markStartMeasurement;
+ (void)markEndMeasurement;
+ (void)markStartFrame:mappingId:;
+ (void)markEndFrame:name:mappingId:;
@end
