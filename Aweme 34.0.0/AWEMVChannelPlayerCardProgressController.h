@interface AWEMVChannelPlayerCardProgressController : AWEMVChannelPlayerCardBaseController
@property (nonatomic) AWEMVChannelProgressView progressView;
@property (nonatomic) BOOL shouldResponsePanGesture;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)player:updatePlayTime:canPlayTime:totalTime:;
- (void)seekToPlayTime:completion:;
- (BOOL)shouldResponseGestureRecognizer:;
- (BOOL)handleResponseGestureRecognizer:;
- (BOOL)shouldResponsePanGesture;
- (void)setShouldResponsePanGesture:;
- (void)progressViewTouchBegan:;
- (void)progressViewTouchChanged:;
- (void)progressViewTouchEnded:bySlideScreen:;
- (void)updateState:;
- (id)progressView;
- (void)viewDidLoad;
- (void)setProgressView:;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
@end
