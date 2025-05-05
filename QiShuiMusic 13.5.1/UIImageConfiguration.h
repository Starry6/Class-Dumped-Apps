@interface UIImageConfiguration : NSObject
@property (nonatomic) BOOL _ignoresDynamicType;
@property (nonatomic) UITraitCollection traitCollection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)configurationByApplyingConfiguration:;
- (id)configurationWithTraitCollection:;
- (BOOL)isEquivalentToConfiguration:;
- (void)_applyConfigurationValuesTo:;
- (id)traitCollection;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_configurationIgnoringDynamicType;
- (id)_initWithTraitCollection:;
- (void)encodeWithCoder:;
- (BOOL)_isUnspecified;
- (BOOL)_shouldApplyConfiguration:;
- (void).cxx_destruct;
- (BOOL)_ignoresDynamicType;
- (id)description;
- (id)_init;
- (BOOL)_hasColorConfigurationWithTintColor;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
