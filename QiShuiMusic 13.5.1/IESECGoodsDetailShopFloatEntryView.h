@interface IESECGoodsDetailShopFloatEntryView : UIView
@property (nonatomic) IESECGoodsDetailShopFloatEntryViewModel viewModel;
@property (nonatomic) IESECGoodsDetailShopFloatEntryDataModel dataModel;
@property (nonatomic) UIView containerView;
@property (nonatomic) IESECLLDCImageView imageView;
@property (nonatomic) UILabel contentLabel;
- (void)floatEntryDidTap;
- (void)updateContentWithViewModel:;
- (id)viewModel;
- (void)layoutSubviews;
- (id)containerView;
- (void)setContainerView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)imageView;
- (void)setViewModel:;
- (void)setImageView:;
- (id)dataModel;
- (void)setDataModel:;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
+ (id)sizeOfFloatEntry:;
@end
