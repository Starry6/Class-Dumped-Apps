@interface AWEMVChannelPrepareManager : NSObject
@property (nonatomic) BOOL enablePrepare;
@property (nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol> preparedPlayer;
- (id)getInflowPreparedPlayerIfHas;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)setPreparedPlayer:;
- (id)preparedPlayer;
- (BOOL)prepareInflowPlayer:;
- (void)stopPreparedPlayerIfHas;
- (BOOL)abTestEnable;
- (BOOL)enablePrepare;
- (BOOL)canPrepare:;
- (void)setEnablePrepare:;
- (id)init;
- (void).cxx_destruct;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (id)sharedInstance;
@end
