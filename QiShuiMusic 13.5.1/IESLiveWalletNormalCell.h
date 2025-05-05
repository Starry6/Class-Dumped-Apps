@interface IESLiveWalletNormalCell : UICollectionViewCell
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) IESLiveWalletGradientView tipContainer;
@property (nonatomic) UILabel tipLabel;
- (void)setTipContainer:;
- (id)tipContainer;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (id)iconView;
- (void)setIconView:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)tipLabel;
- (void)setTipLabel:;
- (void)setupUI;
- (void)updateWithModel:;
+ (id)sizeOfCell;
@end
