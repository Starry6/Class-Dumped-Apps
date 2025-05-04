@interface AWEListenFeedPlayControlElement : AWEListenFeedInteractionBaseElement
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) BOOL isCheckErrorStatus;
@property (nonatomic) AWEListenFeedPlayControlView controlView;
- (void)updateWithModel:playModel:extendModelArray:mixVideoModel:currentModelIndex:context:;
- (void)updateWithModel:playModel:context:;
- (void)prepareForReuseVC;
- (void)__playResumeDisplayLink;
- (void)__resetDisplayLink;
- (void)p_updateWithModel:playModel:extendModelArray:context:;
- (BOOL)isCheckErrorStatus;
- (void)setIsCheckErrorStatus:;
- (void)viewDidLoad;
- (id)displayLink;
- (void)setDisplayLink:;
- (void).cxx_destruct;
- (id)controlView;
- (void)setControlView:;
- (void)willDisplay;
@end
