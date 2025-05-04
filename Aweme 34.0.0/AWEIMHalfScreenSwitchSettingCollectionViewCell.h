@interface AWEIMHalfScreenSwitchSettingCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) UIImageView leftMinus;
@property (nonatomic) UIView<IESIMSwitchProtocol> aSwitch;
@property (nonatomic) UIView lineView;
@property (nonatomic) @? didClickASwitchAction;
- (id)didClickASwitchAction;
- (id)leftMinus;
- (void)setLeftMinus:;
- (void)setDidClickASwitchAction:;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)lineView;
- (void)setLineView:;
- (id)aSwitch;
- (void)setASwitch:;
@end
