@interface BUNativeAdRelatedView : BUInterfaceBaseObject
@property (nonatomic) BUNativeAdRelatedView iteration;
@property (nonatomic) UIButton dislikeButton;
@property (nonatomic) UILabel adLabel;
@property (nonatomic) UIImageView logoADImageView;
@property (nonatomic) BUVideoAdView videoAdView;
@property (nonatomic) <BUVideoAdReportor> videoAdReportor;
@property (nonatomic) UIView ecMallView;
- (void)refreshData:;
- (id)init;
- (void).cxx_destruct;
- (void)setIteration:;
- (id)iteration;
@end
