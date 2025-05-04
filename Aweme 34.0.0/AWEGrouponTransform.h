@interface AWEGrouponTransform : NSObject
@property (nonatomic) NSDictionary commonQueryData;
- (void)configTransformCommonQueryData:;
- (id)transform:preListDataResponse:freshComponentNodeTagSet:;
- (id)cardListForTransformerWithPageViewModel:;
- (id)tabsModelFromPageViewModel:;
- (id)transformToSettingsResponseFromPageViewModel:;
- (id)transformToResourceResponseFromPageViewModel:;
- (id)transformToHeaderToolResponseFromPageViewModel:;
- (id)cardListInBodyFromPageViewModel:preListDataResponse:freshComponentNodeTagSet:;
- (id)cardWithNodeTag:fromPageModel:;
- (id)commonQueryData;
- (void)setCommonQueryData:;
- (void).cxx_destruct;
+ (id)currentFeedNodeFromPageViewModel:;
+ (long long)currentFeedTabIDFromPageViewModel:;
@end
