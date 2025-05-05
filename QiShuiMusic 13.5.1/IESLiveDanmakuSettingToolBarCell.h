@interface IESLiveDanmakuSettingToolBarCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) IESLiveDanmakuSettingBlockItem item;
- (void)cellDidTapped;
- (id)item;
- (void)setTitleLabel:;
- (id)iconView;
- (void)setIconView:;
- (id)initWithFrame:;
- (void)setItem:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupViews;
@end
