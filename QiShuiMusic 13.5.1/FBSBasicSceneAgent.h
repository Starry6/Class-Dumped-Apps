@interface FBSBasicSceneAgent : NSObject
@property (nonatomic) <FBSSceneHandle> scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)succinctDescriptionBuilder;
- (id)scene;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
- (void)scene:reviewEvent:withCompletion:;
- (void)didReceiveMessage:fromCounterpartAgent:withResponseSender:;
- (void)_configureWithScene:;
@end
