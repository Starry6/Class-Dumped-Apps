@interface DNDMutableBypassSettings : DNDBypassSettings
@property (nonatomic) Q immediateBypassEventSourceType;
@property (nonatomic) NSString immediateBypassCNGroupIdentifier;
@property (nonatomic) Q repeatEventSourceBehaviorEnabledSetting;
- (void)setImmediateBypassEventSourceType:;
- (void)setImmediateBypassCNGroupIdentifier:;
- (void)setRepeatEventSourceBehaviorEnabledSetting:;
- (id)copyWithZone:;
@end
