@interface CMFall : NSObject
- (BOOL)setStatsEnabled:;
- (unsigned long long)setDataCollectionConfiguration:;
- (id)fallConfig;
- (id)sendStatsDataToUrl:;
- (void)sendStatsDataToUrl:onCompletion:;
- (void)simulateEvent:;
- (void)setHgalCaptureMode:;
+ (BOOL)areStatsAvailable;
@end
