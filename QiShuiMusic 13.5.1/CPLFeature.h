@interface CPLFeature : NSObject
- (BOOL)disableFeatureInStore:error:;
- (BOOL)enableFeatureInStore:error:;
- (BOOL)shouldDisableScopeWhenFeatureIsDisabled:;
- (BOOL)handleScopeWhenFeatureIsDisabled:scopeType:store:error:;
+ (id)featureWithName:;
@end
