@interface IESLiveVSMessageBoardDressUpThemeSkinCollectionCell : UICollectionViewCell
@property (nonatomic) UIView selectedBottomView;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel label;
@property (nonatomic) UIImageView userImageView;
@property (nonatomic) UILabel userLabel;
@property (nonatomic) UIImageView paidIcon;
- (id)paidIcon;
- (id)selectedBottomView;
- (void)setPaidIcon:;
- (void)setSelectedBottomView:;
- (void)setUI;
- (void)setUserImageView:;
- (id)userImageView;
- (void)setSelected:;
- (void)setLabel:;
- (void)prepareForReuse;
- (id)label;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (id)userLabel;
- (void)setUserLabel:;
@end
