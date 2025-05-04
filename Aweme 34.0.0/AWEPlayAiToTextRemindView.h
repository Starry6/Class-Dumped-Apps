@interface AWEPlayAiToTextRemindView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLable;
@property (nonatomic) <AWEPlayAiToTextRemindViewDelegate> delegate;
@property (nonatomic) BOOL isShow;
- (id)titleLable;
- (void)setTitleLable:;
- (BOOL)isShow;
- (void)setIsShow:;
- (void)didClick;
- (void)addTapGestureRecognizer;
- (void)showWithArrows;
- (void)hide;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setImageView:;
- (id)imageView;
- (void)setUpUI;
+ (id)remindView;
@end
