@interface AWECloudAlbumDetailBaseComponent : NSObject
@property (nonatomic) <IESServiceProvider> context;
@property (nonatomic) <AWECloudAlbumDetailControllerProtocol> container;
@property (nonatomic) <IESServiceProvider> serviceProvider;
- (void)componentDidLoad;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentWillAppear;
- (void)componentDidDisappear;
- (id)serviceBinding;
- (id)container;
- (void)dealloc;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)context;
- (id)serviceProvider;
@end
