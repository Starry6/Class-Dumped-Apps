@interface IESLivePKFlexActivityTabCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView deselectBackgroundImageView;
@property (nonatomic) UIImageView selectedBackgroundImageView;
@property (nonatomic) IESLivePKFlexActivityTabItem item;
- (void)setDeselectBackgroundImageView:;
- (void)setSelectedBackgroundImageView:;
- (id)deselectBackgroundImageView;
- (id)selectedBackgroundImageView;
- (void)updateCellLayoutIfNeed;
- (id)item;
- (void)setTitleLabel:;
- (id)containerView;
- (void)setContainerView:;
- (void)setSelected:;
- (void)updateWithItem:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)setItem:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupView;
- (id)subTitleLabel;
- (void)setSubTitleLabel:;
@end
