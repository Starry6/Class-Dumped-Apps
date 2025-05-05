@interface IESLiveSaaSMuteJSBridgeHandler : NSObject
@property (nonatomic) NSMutableSet tokens;
@property (nonatomic) NSDictionary params;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)muteWithToken:;
- (void)registerHandlerWithBridge:;
- (void)tryMute:;
- (void)tryStopPlay:;
- (void)unMuteWithToken:;
- (id)init;
- (void)dealloc;
- (void)setTokens:;
- (void).cxx_destruct;
- (id)params;
- (id)tokens;
- (void)setParams:;
@end
