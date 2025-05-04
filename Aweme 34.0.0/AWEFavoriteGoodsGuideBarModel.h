@interface AWEFavoriteGoodsGuideBarModel : AWEBaseApiModel
@property (nonatomic) AWEFavoriteGoodsGuideTopBarModel topBar;
@property (nonatomic) AWEFavoriteGoodsGuideBottomNotiModel bottomNoti;
@property (nonatomic) q guideType;
- (long long)guideType;
- (void)setGuideType:;
- (id)bottomNoti;
- (void)setBottomNoti:;
- (void).cxx_destruct;
- (id)topBar;
- (void)setTopBar:;
+ (id)topBarJSONTransformer;
+ (id)bottomNotiJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
