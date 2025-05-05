@interface CBAnalyticsManager : NSObject
- (id)init;
- (void)dealloc;
- (BOOL)handleColorSampleInternal:;
- (void)startReporting;
- (void)sendEventOnceADayLazyInternal:andDict:;
- (BOOL)isFirstEventToday:;
- (void)storeTimestamp:forEventName:;
- (void)logColorSample:withType:;
- (BOOL)isSameDay:asDay:;
- (void)logAllColorSamples;
- (void)stopReportingInternal:;
- (void)sendEventLazy:andDict:;
- (void)setUserActive:;
- (id)stringForType:;
+ (id)sharedInstance;
+ (void)sendEventOnceADayLazy:andDict:;
+ (void)stopReporting:;
+ (BOOL)handleColorSample:;
@end
