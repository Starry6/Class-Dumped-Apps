@interface IESLiveVSGiftSelectedView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) UIImageView giftImageView;
@property (nonatomic) UILabel priceLabel;
@property (nonatomic) UIView bottomContainer;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) IESLiveVSGiftItem item;
- (id)giftImageView;
- (void)setGiftImageView:;
- (void)showGiftScaleAnimation;
- (void)updateWithItem:giftImage:bgImage:;
- (id)backgroundImageView;
- (id)item;
- (id)contentView;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void)setItem:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
- (void)setupUI;
- (void)setBackgroundImageView:;
- (id)priceLabel;
- (void)setPriceLabel:;
- (id)bottomContainer;
- (void)setBottomContainer:;
@end
