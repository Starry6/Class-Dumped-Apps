@interface UIApplicationSceneClientAgent : FBSBasicSceneClientAgent
- (id)init;
- (void)dealloc;
- (void)scene:didInitializeWithEvent:completion:;
- (void)scene:handleEvent:withCompletion:;
- (void)scene:willInvalidateWithEvent:completion:;
@end
