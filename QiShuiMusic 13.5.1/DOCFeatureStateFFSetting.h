@interface DOCFeatureStateFFSetting : DOCFeatureState
@property (nonatomic) NSString domainID;
@property (nonatomic) NSString featureID;
@property (nonatomic) q valueMode;
- (void)setFeatureID:;
- (id)featureID;
- (void).cxx_destruct;
- (id)domainID;
- (void)setDomainID:;
- (id)initWithDomainID:featureID:overrideKey:valueMode:requirements:;
- (long long)valueMode;
- (void)setValueMode:;
+ (id)defaultsOverrideForDomainID:featureID:overrideKey:;
@end
