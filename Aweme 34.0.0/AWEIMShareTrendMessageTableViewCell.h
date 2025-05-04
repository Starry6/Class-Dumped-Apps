@interface AWEIMShareTrendMessageTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) AWEIMGeneralCardView cardView;
@property (nonatomic) UILabel shootSameLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithMessage:;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (void)coverTapped:;
- (void)shootSameButtonTapped;
- (void)setShootSameLabel:;
- (id)shootSameLabel;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (id)menuItems;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)setupUI;
- (id)cardView;
- (void)setCardView:;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end
