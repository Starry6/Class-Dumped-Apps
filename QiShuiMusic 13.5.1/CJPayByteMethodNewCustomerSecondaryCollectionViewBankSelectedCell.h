@interface CJPayByteMethodNewCustomerSecondaryCollectionViewBankSelectedCell : UICollectionViewCell
@property (nonatomic) UIView canvasView;
@property (nonatomic) UIImageView iconImgView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) CJPayPaddingLabel marketingLabel;
- (void)setIconImgView:;
- (void)addDotToCanvasView:;
- (id)iconImgView;
- (id)marketingLabel;
- (void)setMarketingLabel:;
- (void)setupConstraints;
- (void)setTitleLabel:;
- (void)setSelected:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)canvasView;
- (void)setupUI;
- (void)setCanvasView:;
- (void)loadData:;
@end
