@interface AWEIMShareTrendMessageView : UIView
@property (nonatomic) AWEIMShareTrendMessageProps props;
@property (nonatomic) AWEIMGeneralCardView cardView;
@property (nonatomic) UILabel shootSameLabel;
- (void)p_addGesture;
- (void)p_addSubviews;
- (void)p_initSubviews;
- (void)updateWithProps:;
- (void)p_addConstraint;
- (void)p_onTap:;
- (void)setShootSameLabel:;
- (id)shootSameLabel;
- (id)props;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)cardView;
- (void)setCardView:;
- (void)setProps:;
@end
