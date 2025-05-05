@interface FBLocalSynchronousSceneClientProvider : NSObject
@property (nonatomic) NSObject<NSCopying> identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hostProcess;
- (id)scenes;
- (id)init;
- (id)callOutQueue;
- (void)scene:didReceiveActions:;
- (BOOL)canHaveAgent;
- (void)scene:didUpdateClientSettings:withDiff:transitionContext:;
- (id)identifier;
- (void)host:didUpdateSettings:withDiff:transitionContext:completion:;
- (id)fbsSceneForScene:;
- (void)unregisterHost:;
- (id)fbsSceneWithIdentifier:;
- (void)registerInvalidationAction:;
- (void).cxx_destruct;
- (id)sceneWithIdentity:;
- (id)_init;
- (void)scene:sendMessage:withResponse:;
- (void)host:didReceiveActions:;
- (id)registerHost:settings:initialClientSettings:fromRemnant:error:;
- (void)host:didInvalidateWithTransitionContext:completion:;
- (void)_sendSceneCreateFBSWorkspaceDelegateForSceneInfo:transitionContext:;
+ (id)sharedInstance;
@end
