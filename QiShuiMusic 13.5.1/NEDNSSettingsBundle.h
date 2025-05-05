@interface NEDNSSettingsBundle : NSObject
@property (nonatomic) BOOL enabled;
@property (nonatomic) NSArray onDemandRules;
@property (nonatomic) NEDNSSettings settings;
- (BOOL)checkValidityAndCollectErrors:;
- (id)init;
- (id)descriptionWithIndent:options:;
- (id)settings;
- (void)setSettings:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (BOOL)isEnabled;
- (id)onDemandRules;
- (void)setOnDemandRules:;
+ (BOOL)supportsSecureCoding;
@end
