@interface FBSSceneAction : BSAction
@property (nonatomic) FBSScene scene;
@property (nonatomic) FBSSerialQueue callOutQueue;
- (void)setScene:;
- (id)callOutQueue;
- (void)setCallOutQueue:;
- (id)scene;
- (void).cxx_destruct;
@end
