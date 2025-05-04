@interface AWEOpenPlatformSilentAuthProvider : NSObject
@property (nonatomic) AWEOpenPlatformAuthFlowManager flowManager;
@property (nonatomic) @? bridgeAuthCompletionBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)authorizeComplated:error:;
- (void)fetchAuthUserInfoCompleted:;
- (id)bridgeAuthCompletionBlock;
- (void)setBridgeAuthCompletionBlock:;
- (id)initWithJSBridgeParams:;
- (void)updateOauthData:;
- (void).cxx_destruct;
- (void)start;
- (void)setFlowManager:;
- (id)flowManager;
@end
