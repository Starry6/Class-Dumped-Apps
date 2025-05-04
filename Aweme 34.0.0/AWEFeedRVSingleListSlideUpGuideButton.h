@interface AWEFeedRVSingleListSlideUpGuideButton : UIView
@property (nonatomic) BDImageView iconView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) @? clickedHandler;
- (id)clickedHandler;
- (void)setClickedHandler:;
- (void)onButtonClicked;
- (void)showWithAnimationCompletion:;
- (void)dismissWithAnimationComletion:;
- (id)textLabel;
- (id)init;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (void)setupUI;
@end
