@interface CPLMomentShareFeature : CPLFeature
- (BOOL)disableFeatureInStore:error:;
- (BOOL)enableFeatureInStore:error:;
- (BOOL)handleScopeWhenFeatureIsDisabled:scopeType:store:error:;
@end
