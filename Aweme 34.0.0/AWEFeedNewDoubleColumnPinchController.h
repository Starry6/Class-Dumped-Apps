@interface AWEFeedNewDoubleColumnPinchController : AWEDCFeedBaseController
@property (nonatomic) UIPinchGestureRecognizer pinchGesture;
@property (nonatomic) BOOL alreadyHandlePinch;
@property (nonatomic) {CGAffineTransform=dddddd} preTrans;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)containerScrollViewWillBeginDragging:;
- (void)containerBeforeViewWillAppear:;
- (void)containerViewDidAppear:;
- (void)containerViewWillDisappear:;
- (void)handlePinchExit;
- (void)setPreTrans:;
- (id)preTrans;
- (BOOL)alreadyHandlePinch;
- (void)setAlreadyHandlePinch:;
- (void)containerViewWillLayoutSubviews;
- (id)pinchGesture;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)setPinchGesture:;
- (void).cxx_destruct;
- (void)containerViewDidLayoutSubviews;
- (void)handlePinchGesture:;
- (void)containerViewDidLoad;
@end
