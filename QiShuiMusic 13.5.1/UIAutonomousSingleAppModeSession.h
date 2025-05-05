@interface UIAutonomousSingleAppModeSession : NSObject
@property (nonatomic) UIAutonomousSingleAppModeConfiguration effectiveConfiguration;
@property (nonatomic) BOOL active;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setActive:;
- (BOOL)isActive;
- (void)_guidedAccessStateDidChange:;
- (id)initWithEffectiveConfiguration:;
- (id)effectiveConfiguration;
- (void)endWithCompletion:;
- (void)__gaxTrampoline_endSessionWithCompletion:;
- (void)setEffectiveConfiguration:;
+ (id)currentlyActiveSession;
+ (id)__gaxTrampoline_currentlyActiveSession;
+ (void)requestSessionWithConfiguration:completion:;
+ (void)__gaxTrampoline_requestSessionWithConfiguration:completion:;
@end
