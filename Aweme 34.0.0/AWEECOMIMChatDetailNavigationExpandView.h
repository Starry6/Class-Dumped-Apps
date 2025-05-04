@interface AWEECOMIMChatDetailNavigationExpandView : UIView
@property (nonatomic) DUXBaseLabel textLabel;
@property (nonatomic) DUXBaseImageView arrow;
@property (nonatomic) @? clickBlock;
- (void)setClickBlock:;
- (id)clickBlock;
- (id)textLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (void)setupUI;
- (id)arrow;
- (void)setArrow:;
- (void)handleTap;
- (void)updateWithStatus:;
+ (id)expandViewSize;
@end
