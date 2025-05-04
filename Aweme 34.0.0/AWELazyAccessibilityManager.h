@interface AWELazyAccessibilityManager : NSObject
@property (nonatomic) BOOL isVoiceOverRunning;
@property (nonatomic) NSHashTable viewObservers;
- (void)setIsVoiceOverRunning:;
- (void)voiceOverStatusChange;
- (id)viewObservers;
- (void)addAccessibilityObserver:;
- (void)setViewObservers:;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isVoiceOverRunning;
+ (id)sharedManager;
@end
