@interface TMSampleRateUtils : NSObject
+ (BOOL)enableCollectForChannel:eventName:params:;
+ (BOOL)enableCollectForSampleRate:;
+ (id)sampleRateWithChannel:eventName:params:;
@end
