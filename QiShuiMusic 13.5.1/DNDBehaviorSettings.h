@interface DNDBehaviorSettings : NSObject
@property (nonatomic) Q interruptionBehavior;
@property (nonatomic) Q interruptionBehaviorSetting;
- (id)init;
- (unsigned long long)interruptionBehaviorSetting;
- (id)_initWithInterruptionBehaviorSetting:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_initWithSettings:;
- (unsigned long long)interruptionBehavior;
+ (BOOL)supportsSecureCoding;
@end
