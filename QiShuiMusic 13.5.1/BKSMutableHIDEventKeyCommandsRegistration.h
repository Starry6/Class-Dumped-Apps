@interface BKSMutableHIDEventKeyCommandsRegistration : BKSHIDEventKeyCommandsRegistration
@property (nonatomic) BKSHIDEventDeferringEnvironment deferringEnvironment;
@property (nonatomic) BKSHIDEventDeferringToken deferringToken;
@property (nonatomic) NSSet keyCommands;
- (id)init;
- (void)setDeferringEnvironment:;
- (void)setDeferringToken:;
- (id)copyWithZone:;
- (void)setKeyCommands:;
+ (id)new;
@end
