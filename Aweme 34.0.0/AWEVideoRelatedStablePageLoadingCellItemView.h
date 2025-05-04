@interface AWEVideoRelatedStablePageLoadingCellItemView : UIView
@property (nonatomic) UIView cover;
@property (nonatomic) UIView descView1;
@property (nonatomic) UIView descView2;
@property (nonatomic) UIView authorView;
@property (nonatomic) UIView avatarView;
- (id)cover;
- (void)setCover:;
- (id)authorView;
- (void)setAuthorView:;
- (void)setDescView1:;
- (void)setDescView2:;
- (id)descView1;
- (id)descView2;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (id)avatarView;
- (void).cxx_destruct;
- (void)setupUI;
+ (double)authorInfoViewHeight;
+ (double)padding;
+ (double)cellWidth;
+ (double)cellHeight;
@end
