@interface FFFeatureState : NSObject
@property (nonatomic) NSDictionary attributes;
@property (nonatomic) NSString domain;
@property (nonatomic) NSString feature;
@property (nonatomic) q value;
@property (nonatomic) NSString phase;
@property (nonatomic) NSString disclosurerequired;
- (id)phase;
- (void)setPhase:;
- (void)setFeature:;
- (id)feature;
- (void)setDisclosurerequired:;
- (void)setAttributes:;
- (id)attributes;
- (id)initWithDomain:feature:value:phase:disclosureRequired:attributes:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDomain:feature:value:;
- (long long)value;
- (id)domain;
- (id)disclosurerequired;
- (void)setDomain:;
- (id)copyWithZone:;
@end
