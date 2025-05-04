@interface AWEIMShareStickerMessageView : UIView
@property (nonatomic) AWEIMShareStickerMessageProps props;
@property (nonatomic) AWEIMGeneralCardView cardView;
@property (nonatomic) UILabel shootSameLabel;
@property (nonatomic) UIView<IESIMGradientViewProtocol> gradientView;
- (void)p_addGesture;
- (void)p_addSubviews;
- (void)p_initSubviews;
- (void)updateWithProps:;
- (void)p_addConstraint;
- (void)p_onTap:;
- (void)shootSameButtonTapped;
- (void)setShootSameLabel:;
- (id)shootSameLabel;
- (id)gradientView;
- (id)props;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setGradientView:;
- (id)cardView;
- (void)setCardView:;
- (void)setProps:;
@end
