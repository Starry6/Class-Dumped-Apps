@interface IESLiveSaaSFeedBannerCollectionViewCell : UICollectionViewCell
@property (nonatomic) IESLiveSaaSFeedBannerView bannerView;
@property (nonatomic) <HTSLiveSaaSFeedItem> item;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didSetAttachingDIContext;
- (void)updateWithBanners:reference:;
- (id)item;
- (void)update:;
- (id)initWithFrame:;
- (void)setItem:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)bannerView;
- (void)setBannerView:;
@end
