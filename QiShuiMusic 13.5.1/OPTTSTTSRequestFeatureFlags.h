@interface OPTTSTTSRequestFeatureFlags : NSObject
@property (nonatomic) BOOL fe_feature;
@property (nonatomic) BOOL fe_feature_only;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)fe_feature;
- (BOOL)fe_feature_only;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
@end
