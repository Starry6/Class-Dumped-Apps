@interface DNDModeConfigurationTrigger : NSObject
@property (nonatomic) BOOL hasSecureData;
@property (nonatomic) q compatibilityVersion;
@property (nonatomic) Q enabledSetting;
@property (nonatomic) BOOL isEnabled;
- (id)init;
- (BOOL)hasSecureData;
- (long long)compatibilityVersion;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEnabled;
- (id)initWithEnabledSetting:;
- (unsigned long long)enabledSetting;
+ (BOOL)supportsSecureCoding;
@end
