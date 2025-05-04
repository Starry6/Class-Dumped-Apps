@interface AWEFeedFriendsOnFeedAllReadLinkView : UIView
@property (nonatomic) UILabel label;
@property (nonatomic) NSString text;
@property (nonatomic) @? linkViewClickAction;
- (id)initWithText:clickAction:;
- (void)setLinkViewClickAction:;
- (void)didClickAction;
- (id)linkViewClickAction;
- (void)setLabel:;
- (void)setText:;
- (id)text;
- (id)label;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)setupUI;
@end
