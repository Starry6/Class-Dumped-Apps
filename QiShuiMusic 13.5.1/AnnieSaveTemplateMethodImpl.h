@interface AnnieSaveTemplateMethodImpl : AnnieSaveTemplateMethod
@property (nonatomic) UIView<IESHYContainerProtocol> hybridContainer;
@property (nonatomic) BDXBridgeEventSubscriber subscriber;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewDidLoadFailedWithUrl:error:;
- (id)hybridContainer;
- (void)viewDidCreated:;
- (void)applyAlbumPermissionWithContext:completion:;
- (void)callWithParamModel:completionHandler:;
- (void)saveToAlbumWithFilePath:context:completion:;
- (void)saveToFilename:image:quality:completion:;
- (void)setHybridContainer:;
- (void)viewDidFinishLoadWithURL:;
- (void)viewDidFirstScreen;
- (void)viewDidRecieveError:;
- (void)viewDidStartLoading;
- (void)viewDidUpdate;
- (id)takeScreenshot;
- (id)subscriber;
- (void)clear;
- (void).cxx_destruct;
- (void)setSubscriber:;
@end
