@interface FBSBasicSceneHostAgent : FBSBasicSceneAgent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)scene:didInitializeWithEvent:completion:;
- (void)scene:willInvalidateWithEvent:completion:;
@end
