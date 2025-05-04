@interface AWEMateMultipleCardFooterView : UIView
@property (nonatomic) UILabel swipeUpHintLabel;
@property (nonatomic) AFDButton replaceUsersButton;
@property (nonatomic) UIImageView moreImageView;
@property (nonatomic) double maxWidth;
@property (nonatomic) @? replaceUsersBlock;
@property (nonatomic) BOOL showsSlideUpHint;
@property (nonatomic) BOOL showReplaceButton;
- (void)setMoreImageView:;
- (id)moreImageView;
- (BOOL)showsSlideUpHint;
- (void)setShowsSlideUpHint:;
- (void)setReplaceUsersBlock:;
- (void)setShowReplaceButton:;
- (id)replaceUsersButton;
- (id)swipeUpHintLabel;
- (void)p_clickReplaceUsersButton:;
- (id)replaceUsersBlock;
- (BOOL)showReplaceButton;
- (void)setSwipeUpHintLabel:;
- (void)setReplaceUsersButton:;
- (id)initWithFrame:;
- (double)maxWidth;
- (void)setMaxWidth:;
- (void).cxx_destruct;
- (void)setupUI;
@end
