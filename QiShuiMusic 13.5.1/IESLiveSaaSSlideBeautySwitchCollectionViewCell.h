@interface IESLiveSaaSSlideBeautySwitchCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel switchLabel;
@property (nonatomic) UIView switchIconView;
@property (nonatomic) UIView separatorLineView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) IESLiveSaaSRoomBeautySwitchItem item;
- (void)setSwitchIconView:;
- (id)switchIconView;
- (void)setSwitchLabel:;
- (id)switchLabel;
- (id)item;
- (id)initWithFrame:;
- (void)setItem:;
- (void).cxx_destruct;
- (id)iconImageView;
- (void)setIconImageView:;
- (void)setupUI;
- (id)separatorLineView;
- (void)setSeparatorLineView:;
@end
