@interface IESLiveCommentGiftView : UIView
@property (nonatomic) UILabel priceLabel;
@property (nonatomic) IESLiveAnimatedImageView animatedImageView;
@property (nonatomic) UIImageView giftIconImageView;
@property (nonatomic) UIImageView background;
@property (nonatomic) HTSLiveGiftStruct gift;
@property (nonatomic) IESLiveCommentGiftViewModel viewModel;
@property (nonatomic) <IESLiveMonitor> monitor;
- (id)animatedImageView;
- (id)giftIconImageView;
- (void)sendGift;
- (void)setAnimatedImageView:;
- (void)setGiftIconImageView:;
- (void)updateGift:;
- (id)background;
- (id)viewModel;
- (void)setBackground:;
- (id)initWithViewModel:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
- (void)setViewModel:;
- (void)setupView;
- (id)gift;
- (id)priceLabel;
- (void)setPriceLabel:;
- (void)setGift:;
@end
