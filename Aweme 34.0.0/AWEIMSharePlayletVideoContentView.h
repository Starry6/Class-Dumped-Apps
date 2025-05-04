@interface AWEIMSharePlayletVideoContentView : UIView
@property (nonatomic) AWEIMSharePlayletVideoContentProps props;
@property (nonatomic) AWEIMGeneralCardView cardView;
- (void)p_addGesture;
- (void)p_addSubviews;
- (void)p_initSubviews;
- (void)updateWithProps:;
- (void)p_addConstraint;
- (void)p_onTap:;
- (id)props;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)cardView;
- (void)setCardView:;
- (void)setProps:;
@end
