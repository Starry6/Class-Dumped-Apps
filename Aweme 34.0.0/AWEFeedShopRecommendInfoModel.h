@interface AWEFeedShopRecommendInfoModel : MTLModel
@property (nonatomic) NSString dishName;
@property (nonatomic) AWEURLModel headImage;
@property (nonatomic) AWEURLModel originHeadImage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)headImage;
- (void)setHeadImage:;
- (id)dishName;
- (void)setDishName:;
- (id)originHeadImage;
- (void)setOriginHeadImage:;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
@end
