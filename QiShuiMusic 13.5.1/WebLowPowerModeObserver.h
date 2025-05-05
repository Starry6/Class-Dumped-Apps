@interface WebLowPowerModeObserver : NSObject
@property (nonatomic) ^v notifier;
@property (nonatomic) BOOL isLowPowerModeEnabled;
- (void)dealloc;
- (BOOL)isLowPowerModeEnabled;
- (id)notifier;
- (void)_didReceiveLowPowerModeChange;
- (void)setNotifier:;
- (id)initWithNotifier:;
@end
