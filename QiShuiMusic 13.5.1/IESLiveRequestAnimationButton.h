@interface IESLiveRequestAnimationButton : IESLiveButton
@property (nonatomic) UIImageView animationView;
@property (nonatomic) UILabel animationLabel;
@property (nonatomic) BOOL isAnimation;
@property (nonatomic) NSString recordTitle;
- (void)setIsAnimation:;
- (void)addAnimationViewAndTitle;
- (id)animationLabel;
- (void)receiveAppWillBecomeForegroundNotification;
- (void)setAnimationLabel:;
- (void)dealloc;
- (void)setTitle:forState:;
- (id)initWithFrame:;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (void)stopAnimation;
- (id)createAnimation;
- (BOOL)isAnimation;
- (id)animationView;
- (void)setAnimationView:;
- (id)recordTitle;
- (void)setRecordTitle:;
@end
