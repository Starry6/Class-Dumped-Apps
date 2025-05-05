@interface BKSMutableHIDEventDeferringTarget : BKSHIDEventDeferringTarget
@property (nonatomic) NSInteger pid;
@property (nonatomic) BKSHIDEventDeferringToken token;
- (id)init;
- (void)setToken:;
- (void)setPid:;
- (id)copyWithZone:;
+ (id)new;
@end
