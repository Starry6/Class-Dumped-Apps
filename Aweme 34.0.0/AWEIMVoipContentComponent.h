@interface AWEIMVoipContentComponent : AWEIMFlexComponent
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didTapContent;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)presenter:didUpdateWithView:;
- (void)p_createSmallCardPresenter;
- (id)voipMessage;
- (void)p_createLabelPresenter;
- (void)preloadCallConfigIfNeed;
- (id)displayMessage;
- (void)setScene:;
- (long long)scene;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
+ (double)maxWidthWithMessage:;
+ (id)textSizeWithText:;
@end
