@interface AWEStudioToolBarFeatureConfig : AWEStudioComposerBaseFeatureConfig
@property (nonatomic) NSDictionary itemString2ContextValueDict;
@property (nonatomic) q exposedItemCount;
@property (nonatomic) NSArray featureItemSortOrderStringArray;
@property (nonatomic) NSDictionary customItemDict;
@property (nonatomic) NSArray featureItemSortOrder;
- (void)setExposedItemCount:;
- (void)setFeatureItemSortOrderStringArray:;
- (void)setCustomItemDict:;
- (id)featureItemSortOrderStringArray;
- (id)itemString2ContextValueDict;
- (id)customItemDict;
- (id)featureItemSortOrder;
- (long long)exposedItemCount;
- (void)setItemString2ContextValueDict:;
- (void).cxx_destruct;
@end
