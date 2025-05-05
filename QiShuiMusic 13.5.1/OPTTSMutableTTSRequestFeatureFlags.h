@interface OPTTSMutableTTSRequestFeatureFlags : OPTTSTTSRequestFeatureFlags
@property (nonatomic) BOOL fe_feature;
@property (nonatomic) BOOL fe_feature_only;
- (id)init;
- (id)copyWithZone:;
- (BOOL)fe_feature;
- (void)setFe_feature:;
- (BOOL)fe_feature_only;
- (void)setFe_feature_only:;
@end
