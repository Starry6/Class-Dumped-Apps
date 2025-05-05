@interface GEOLocationCollectionReporter : NSObject
+ (void)reportRealtimeLocationCollection:;
+ (void)reportBatchLocationCollection:;
+ (void)reportReferencePressureCollection:;
+ (void)reportCalibratedPressureCollection:;
+ (void)_fuzzProbes:;
@end
