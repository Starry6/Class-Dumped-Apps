@interface CBProxFilter : CBFilter
@property (nonatomic) BOOL triggered;
- (id)handleALSEvent:;
- (id)init;
- (void)dealloc;
- (id)handleProximityEvent:;
- (void)setTriggered:;
- (id)filterEvent:;
- (BOOL)isTriggered;
@end
