@interface APBToygerPresentTask : APBToygerBaseTask
@property (nonatomic) <DTFFaceViewProtocol> faceView;
- (void)_checkAuth;
- (void)invokeWithPipeInfo:;
- (void)processEvent:withCompletionCallback:;
- (void)presentAnimated:completion:;
- (void).cxx_destruct;
- (id)faceView;
- (void)setFaceView:;
@end
