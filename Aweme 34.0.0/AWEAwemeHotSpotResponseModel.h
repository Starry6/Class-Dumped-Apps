@interface AWEAwemeHotSpotResponseModel : AWEAwemeResponseModel
@property (nonatomic) AWENewHotSearchModel hotSearchModel;
@property (nonatomic) q totalCount;
@property (nonatomic) NSArray hotSpotCommentList;
@property (nonatomic) NSArray microToutiaoArticleList;
@property (nonatomic) NSString hideVideoInfo;
@property (nonatomic) q bottomBarType;
@property (nonatomic) AWEHotSpotBottomBarInfo bottomBarInfo;
- (long long)bottomBarType;
- (void)setBottomBarType:;
- (id)hotSpotCommentList;
- (id)hotSearchModel;
- (void)setHotSearchModel:;
- (void)setHotSpotCommentList:;
- (id)microToutiaoArticleList;
- (void)setMicroToutiaoArticleList:;
- (id)hideVideoInfo;
- (void)setHideVideoInfo:;
- (id)bottomBarInfo;
- (void)setBottomBarInfo:;
- (long long)totalCount;
- (void).cxx_destruct;
- (void)setTotalCount:;
+ (id)hotSearchModelTransformer;
+ (id)microToutiaoArticleListJSONTransformer;
+ (id)bottomBarInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)hotSpotCommentListJSONTransformer;
@end
