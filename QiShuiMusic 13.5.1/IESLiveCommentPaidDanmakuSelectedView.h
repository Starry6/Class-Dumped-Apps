@interface IESLiveCommentPaidDanmakuSelectedView : UIView
@property (nonatomic) HTSLiveTabItem currentTabItem;
@property (nonatomic) IESLiveAnimatedImageView imageView;
@property (nonatomic) UIImageView closeBtn;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL fold;
- (id)closeBtn;
- (id)currentTabItem;
- (void)setCloseBtn:;
- (void)setCurrentTabItem:;
- (void)updateWithTabItem:;
- (BOOL)enabled;
- (id)initWithFrame:;
- (void)setEnabled:;
- (void).cxx_destruct;
- (void)reset;
- (id)imageView;
- (void)setImageView:;
- (void)setupViews;
- (BOOL)fold;
- (void)setFold:;
@end
