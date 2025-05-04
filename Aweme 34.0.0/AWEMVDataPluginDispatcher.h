@interface AWEMVDataPluginDispatcher : NSObject
@property (nonatomic) <AWEMVDataControllerProtocol> dataController;
@property (nonatomic) AWEMVWeakArray plugins;
@property (nonatomic) NSMapTable caches;
@property (nonatomic) AWEMVChannelPageContext mvContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataController:;
- (id)mvContext;
- (void)setMvContext:;
- (BOOL)shouldInterceptFetchWithContext:completion:;
- (BOOL)shouldInterceptResponseCompletion:responseModel:context:;
- (id)initWithDataController:context:;
- (void)addPlugins:;
- (id)pluginsByProtocol:;
- (id)pluginsBySelector:;
- (id)pluginByProtocol:;
- (id)caches;
- (void)setPlugins:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)plugins;
- (id)dataController;
@end
