@interface IESECPDPContainerSlideViewCell : UICollectionViewCell
@property (nonatomic) IESECUIImageView imageView;
@property (nonatomic) UILabel priceStrView;
@property (nonatomic) UIView maskView;
@property (nonatomic) <IESECPDPContainerSlideViewCellDelegate> delegate;
- (id)attrString:;
- (id)priceStrView;
- (void)setPriceStrView:;
- (void)updateWithModel:delegate:;
- (id)maskView;
- (void)setDelegate:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (id)imageView;
- (void)setMaskView:;
- (void)setImageView:;
- (void)setupUI;
@end
