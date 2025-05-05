@interface DIRSModuleHive : NSObject
@property (nonatomic) DIRSContext context;
- (id)loadUsingClass:;
- (void)_active:;
- (void)_notifyTarget:performSelector:withObjects:;
- (id)exportCommonParameters:;
- (id)exportFeatureOptions;
- (id)exportFeatureParameters;
- (id)loadUsingId:;
- (id)loadUsingProtocol:;
- (id)moduleList;
- (void)notify:selector:arguments:;
- (id)pluginList;
- (void)raiseError:isFatal:withUserInfo:;
- (BOOL)handleURL:;
- (id)context;
- (void)start;
- (void)suspend;
- (void)resume;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setContext:;
@end
