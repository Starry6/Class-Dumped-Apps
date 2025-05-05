@interface BDUGLuckyScreenShotXBridge : BDUGLuckyXBridgeMethod
@property (nonatomic) UIView<BDXViewContainerProtocol> lynxView;
@property (nonatomic) BDXBridgeEventSubscriber subscriber;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)paramModelClass;
- (void)takeScreenshotToAlbumWithScreenshotImage:paramModel:completion:;
- (void)callWithParamModel:completionHandler:;
- (id)lynxView;
- (id)replaceSchemeHostPathWithURLString:;
- (Class)resultModelClass;
- (void)saveToFilename:withImage:completion:;
- (void)setLynxView:;
- (void)takeScreenshotToAlbumWithCompletion:paramModel:;
- (void)takeScreenshotToFilename:completion:;
- (id)takeScreenshot;
- (id)subscriber;
- (void).cxx_destruct;
- (void)reset;
- (void)setSubscriber:;
- (id)methodName;
@end
