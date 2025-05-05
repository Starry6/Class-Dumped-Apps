@interface IESECGoodsServiceCouponView : UIView
@property (nonatomic) NSArray couponNameList;
@property (nonatomic) double contentSizeWidth;
@property (nonatomic) BOOL isHalfMode;
@property (nonatomic) BOOL shouldUseHalfCouponBGImage;
@property (nonatomic) IESECTagsContainerView tagStackContainerView;
@property (nonatomic) UILabel headlabel;
@property (nonatomic) UIImageView arrowIconImageView;
@property (nonatomic) BOOL isGoodsFeed;
- (void)setIsGoodsFeed:;
- (id)arrowIconImageView;
- (double)contentSizeWidth;
- (id)couponNameList;
- (id)headlabel;
- (BOOL)isGoodsFeed;
- (BOOL)isHalfMode;
- (void)p_setupCurrentCouponView;
- (void)setArrowIconImageView:;
- (void)setContentSizeWidth:;
- (void)setCouponNameList:;
- (void)setHeadlabel:;
- (void)setIsHalfMode:;
- (void)setShouldUseHalfCouponBGImage:;
- (void)setTagStackContainerView:;
- (BOOL)shouldUseHalfCouponBGImage;
- (id)tagStackContainerView;
- (void).cxx_destruct;
@end
