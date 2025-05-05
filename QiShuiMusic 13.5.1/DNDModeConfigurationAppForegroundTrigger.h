@interface DNDModeConfigurationAppForegroundTrigger : DNDModeConfigurationTrigger
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) DNDApplicationIdentifier applicationIdentifier;
- (id)applicationIdentifier;
- (id)bundleIdentifier;
- (BOOL)hasSecureData;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithBundleIdentifier:enabledSetting:;
- (id)initWithApplicationIdentifier:enabledSetting:;
+ (BOOL)supportsSecureCoding;
@end
