@interface AWECommentFeatureSequence : AWEFeatureSequence
@property (nonatomic) q limitCommentTopCount;
@property (nonatomic) q limitItemLength;
- (void)updateFeature:forKey:extra:;
- (void)parseFeatureSequenceConfig:;
- (void)setLimitCommentTopCount:;
- (void)setLimitItemLength:;
- (long long)limitCommentTopCount;
- (long long)limitItemLength;
- (id)featureSequenceItemKey;
- (id)getItemFeatureDictByFeatureModel:;
- (void)limitSequenceLength;
- (id)constructFeatureSequenceDict;
+ (Class)defaultFeatureModelClass;
@end
