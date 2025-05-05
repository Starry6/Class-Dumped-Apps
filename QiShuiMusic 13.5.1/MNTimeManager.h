@interface MNTimeManager : NSObject
@property (nonatomic) <MNTimeProvider> provider;
- (void)setProvider:;
- (id)init;
- (id)provider;
- (void).cxx_destruct;
- (void)unregisterObserver:;
- (void)registerObserver:;
- (void)_resetToDefaultProvider;
+ (id)currentDate;
+ (id)sharedManager;
+ (double)currentTime;
@end
