@interface AWEECOMIMDynamicCardLowestPriceView : AWEECOMIMDynamicCardBaseElementView
@property (nonatomic) UIImageView bgLeftImageView;
@property (nonatomic) UIImageView bgMiddleLeftImageView;
@property (nonatomic) UIImageView bgMiddleImageView;
@property (nonatomic) UIImageView bgMiddleRightImageView;
@property (nonatomic) UIImageView bgRightImageView;
@property (nonatomic) UILabel discountContentLabel;
@property (nonatomic) BDPCDDynamicCardPriceView discountPriceView;
@property (nonatomic) BDPCDDynamicCardPriceView originPriceView;
@property (nonatomic) UIView currentPriceViewContainer;
@property (nonatomic) BDPCDDynamicCardPriceView currentPriceView;
@property (nonatomic) UILabel restoreLabel;
- (void)updateWithElememtModel:;
- (id)discountPriceView;
- (void)setDiscountPriceView:;
- (id)currentPriceView;
- (void)setCurrentPriceView:;
- (double)widthWithElementModel:;
- (double)heightWithElementModel:;
- (void)setBgLeftImageView:;
- (id)bgLeftImageView;
- (void)setImage:imageNamed:;
- (void)setBgMiddleLeftImageView:;
- (id)bgMiddleLeftImageView;
- (void)setBgMiddleRightImageView:;
- (id)bgMiddleRightImageView;
- (void)setBgRightImageView:;
- (id)bgRightImageView;
- (void)setBgMiddleImageView:;
- (id)bgMiddleImageView;
- (void)setDiscountContentLabel:;
- (id)discountContentLabel;
- (void)setOriginPriceView:;
- (id)originPriceView;
- (void)setCurrentPriceViewContainer:;
- (id)currentPriceViewContainer;
- (void)setRestoreLabel:;
- (id)restoreLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)sizeWithElementModel:maxSize:;
+ (BOOL)checkSupportSubElementViewWithElementModel:;
+ (double)widthWithElementModel:maxSize:;
+ (BOOL)isVisible:;
@end
