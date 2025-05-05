@interface FBSceneSnapshotAction : FBSSceneSnapshotAction
@property (nonatomic) NSString sceneID;
- (void)dealloc;
- (id)sceneID;
- (void).cxx_destruct;
- (id)initWithScene:requests:expirationInterval:responseHandler:;
- (void)invalidate;
@end
