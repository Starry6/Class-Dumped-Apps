@interface AWEFeedFeatureSequence : AWEFeatureSequence
@property (nonatomic) NSArray feedScenes;
- (void)parseFeatureSequenceConfig:;
- (BOOL)validateFeatureWithKey:itemID:extra:;
- (id)filterContextWithItemID:extra:;
- (id)feedScenes;
- (id)p_feedSceneWithItemID:extra:;
- (id)p_awemeModelWithItemID:extra:;
- (void)setFeedScenes:;
- (void).cxx_destruct;
+ (Class)defaultFeatureModelClass;
@end
