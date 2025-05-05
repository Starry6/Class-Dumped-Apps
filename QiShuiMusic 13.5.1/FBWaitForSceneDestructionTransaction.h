@interface FBWaitForSceneDestructionTransaction : FBTransaction
@property (nonatomic) FBScene scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_didComplete;
- (id)_customizedDescriptionProperties;
- (void)_begin;
- (BOOL)_canBeInterrupted;
- (id)initWithScene:;
- (void)dealloc;
- (void)sceneDidInvalidate:;
- (id)scene;
- (void).cxx_destruct;
@end
