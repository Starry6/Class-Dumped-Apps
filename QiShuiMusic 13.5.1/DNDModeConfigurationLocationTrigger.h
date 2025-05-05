@interface DNDModeConfigurationLocationTrigger : DNDModeConfigurationTrigger
@property (nonatomic) CLCircularRegion region;
@property (nonatomic) NSString detail;
- (BOOL)hasSecureData;
- (id)region;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)detail;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithRegion:detail:enabledSetting:;
+ (BOOL)supportsSecureCoding;
@end
