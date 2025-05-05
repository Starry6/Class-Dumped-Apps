@interface PHAssetSceneAnalysisProperties : PHAssetPropertySet
@property (nonatomic) s sceneAnalysisVersion;
@property (nonatomic) NSDate sceneAnalysisTimestamp;
@property (nonatomic) NSData distanceIdentity;
- (id)initWithFetchDictionary:asset:prefetched:;
- (id)distanceIdentity;
- (void).cxx_destruct;
- (short)sceneAnalysisVersion;
- (id)sceneAnalysisTimestamp;
+ (id)propertiesToFetch;
+ (id)propertySetName;
@end
