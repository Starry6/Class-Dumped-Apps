@interface DNDBypassSettings : NSObject
@property (nonatomic) Q immediateBypassEventSourceType;
@property (nonatomic) NSString immediateBypassCNGroupIdentifier;
@property (nonatomic) Q repeatEventSourceBehaviorEnabledSetting;
- (id)init;
- (id)immediateBypassCNGroupIdentifier;
- (unsigned long long)repeatEventSourceBehaviorEnabledSetting;
- (unsigned long long)immediateBypassEventSourceType;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)_initWithImmediateBypassEventSourceType:immediateBypassCNGroupIdentifier:repeatEventSourceBehaviorEnabledSetting:;
- (id)copyWithZone:;
- (id)_initWithSettings:;
- (id)diffDescription;
+ (BOOL)supportsSecureCoding;
@end
