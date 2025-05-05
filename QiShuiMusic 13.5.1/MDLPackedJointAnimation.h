@interface MDLPackedJointAnimation : MDLObject
@property (nonatomic) NSArray jointPaths;
@property (nonatomic) MDLAnimatedVector3Array translations;
@property (nonatomic) MDLAnimatedQuaternionArray rotations;
@property (nonatomic) MDLAnimatedVector3Array scales;
- (id)scales;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)jointPaths;
- (id)translations;
- (id)rotations;
- (id)initWithName:jointPaths:;
@end
