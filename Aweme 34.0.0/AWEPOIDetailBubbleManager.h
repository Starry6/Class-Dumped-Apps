@interface AWEPOIDetailBubbleManager : NSObject
@property (nonatomic) NSArray configModels;
@property (nonatomic) q index;
@property (nonatomic) BDXBridgeEventSubscriber subscriber;
@property (nonatomic) NSString scene;
@property (nonatomic) BOOL hasFinished;
@property (nonatomic) BOOL isRunning;
- (id)configModels;
- (void)setConfigModels:;
- (void)setupLynxPopConfigRegistListener;
- (void)sendNativeNotification:;
- (void)sendLynxNotification:;
- (void)registBubble:forConfig:;
- (void)setIndex:;
- (void)startup;
- (long long)index;
- (void)setScene:;
- (void)setIsRunning:;
- (void)dealloc;
- (id)scene;
- (id)subscriber;
- (void)setSubscriber:;
- (void)setup;
- (void).cxx_destruct;
- (BOOL)isRunning;
- (void)setHasFinished:;
- (BOOL)hasFinished;
- (void)markFinished;
@end
