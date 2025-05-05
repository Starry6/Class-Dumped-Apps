@interface TTVideoEngineLogInspector : NSObject
@property (nonatomic) <TTVideoEngineNetClient> networkSession;
@property (nonatomic) NSString host;
- (void)inspectEvent:;
- (id)networkSession;
- (void)setNetworkSession:;
- (id)init;
- (id)host;
- (void)setHost:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
