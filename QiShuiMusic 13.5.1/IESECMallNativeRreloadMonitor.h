@interface IESECMallNativeRreloadMonitor : NSObject
@property (nonatomic) BOOL didFirstScreen;
@property (nonatomic) Q totleCountInFirstScreen;
@property (nonatomic) Q hitPreloadCountInFirstScreen;
@property (nonatomic) double preloadNativeCardStartTime;
@property (nonatomic) double preloadNativeCardEndTime;
- (BOOL)didFirstScreen;
- (unsigned long long)hitPreloadCountInFirstScreen;
- (double)preloadNativeCardEndTime;
- (double)preloadNativeCardStartTime;
- (void)setDidFirstScreen:;
- (void)setHitPreloadCountInFirstScreen:;
- (void)setPreloadNativeCardEndTime:;
- (void)setPreloadNativeCardStartTime:;
- (void)setTotleCountInFirstScreen:;
- (unsigned long long)totleCountInFirstScreen;
- (id)init;
@end
