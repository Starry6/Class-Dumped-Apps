@interface IESLiveWalletMyCoinChargeCell : UICollectionViewCell
@property (nonatomic) UIImageView coinIcon;
@property (nonatomic) UILabel coinNumLabel;
@property (nonatomic) UILabel freezeLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) IESLiveWalletMyCoinItem mycoinItem;
@property (nonatomic) UILabel nickNameLabel;
@property (nonatomic) IESLiveWalletCoinChargeView coinChargeView;
- (void)setFreezeLabel:;
- (id)coinChargeView;
- (id)coinIcon;
- (id)coinNumLabel;
- (id)freezeLabel;
- (id)mycoinItem;
- (id)nickNameLabel;
- (void)setCoinChargeView:;
- (void)setCoinIcon:;
- (void)setCoinNumLabel:;
- (void)setMycoinItem:;
- (void)setNickNameLabel:;
- (void)updateWithItem:trackInfo:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:;
@end
