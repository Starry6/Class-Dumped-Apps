@interface IESLiveSaaSFeedBannerItemModel : BDDynamicModel
@property (nonatomic) NSArray banners;
@property (nonatomic) NSString track;
@property (nonatomic) # cellClass;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterMethod:;
- (id)enterFrom;
- (id)enterMethod;
- (id)initWithModel:store:;
- (id)itemSizeInCollectionView:;
- (void)setEnterFrom:;
- (void).cxx_destruct;
- (id)banners;
- (void)setBanners:;
- (id)track;
- (void)setTrack:;
@end
