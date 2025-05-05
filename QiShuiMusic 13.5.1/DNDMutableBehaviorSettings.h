@interface DNDMutableBehaviorSettings : DNDBehaviorSettings
@property (nonatomic) Q interruptionBehavior;
@property (nonatomic) Q interruptionBehaviorSetting;
- (void)setInterruptionBehaviorSetting:;
- (void)setInterruptionBehavior:;
- (id)copyWithZone:;
@end
