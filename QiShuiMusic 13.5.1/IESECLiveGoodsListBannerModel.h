@interface IESECLiveGoodsListBannerModel : MTLModel
@property (nonatomic) NSArray refreshTiming;
@property (nonatomic) IESECLiveGoodsListBannerInfoModel bannerInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bannerInfo;
- (id)refreshTiming;
- (void)setBannerInfo:;
- (void)setRefreshTiming:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
