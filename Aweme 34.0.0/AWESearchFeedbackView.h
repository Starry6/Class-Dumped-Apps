@interface AWESearchFeedbackView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) NSString url;
- (void)themeDidChange:;
- (void)configWithURL:;
- (id)init;
- (void)setUrl:;
- (BOOL)pointInside:withEvent:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (id)url;
- (void)setupUI;
@end
