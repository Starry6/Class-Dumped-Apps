@interface FBSBasicSceneClientAgent : FBSBasicSceneAgent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)scene:didInitializeWithEvent:completion:;
- (void)scene:handleEvent:withCompletion:;
- (void)scene:willInvalidateWithEvent:completion:;
@end
