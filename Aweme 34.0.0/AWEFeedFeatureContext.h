@interface AWEFeedFeatureContext : NSObject
@property (nonatomic) double liveLastEndTime;
- (double)liveLastEndTime;
- (BOOL)isContextAvailableWithFeedScene:;
- (void)setLiveLastEndTime:;
@end
