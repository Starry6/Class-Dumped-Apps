@interface BDUGLuckySettingsObserverInfo : NSObject
@property (nonatomic) Q settingsType;
@property (nonatomic) q pollingInterval;
@property (nonatomic) <BDUGLuckySettingsObserver> observer;
@property (nonatomic) double lastUpdateTime;
- (id)initWithSettingsType:pollingInterval:observer:;
- (double)lastUpdateTime;
- (long long)pollingInterval;
- (unsigned long long)settingsType;
- (void)setSettingsType:;
- (void)setObserver:;
- (void).cxx_destruct;
- (void)setLastUpdateTime:;
- (id)observer;
- (void)setPollingInterval:;
@end
