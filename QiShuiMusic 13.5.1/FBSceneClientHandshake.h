@interface FBSceneClientHandshake : NSObject
@property (nonatomic) RBSProcessHandle handle;
@property (nonatomic) NSSet remnants;
- (id)remnants;
- (id)init;
- (id)handle;
- (id)_initWithHandle:remnants:;
- (void).cxx_destruct;
- (id)description;
@end
