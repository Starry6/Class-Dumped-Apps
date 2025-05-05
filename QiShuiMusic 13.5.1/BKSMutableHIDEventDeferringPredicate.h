@interface BKSMutableHIDEventDeferringPredicate : BKSHIDEventDeferringPredicate
@property (nonatomic) BKSHIDEventDeferringEnvironment environment;
@property (nonatomic) BKSHIDEventDisplay display;
@property (nonatomic) BKSHIDEventDeferringToken token;
- (id)init;
- (void)setEnvironment:;
- (void)setDisplay:;
- (void)setToken:;
- (id)copyWithZone:;
+ (id)new;
@end
