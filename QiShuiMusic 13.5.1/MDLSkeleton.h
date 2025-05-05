@interface MDLSkeleton : MDLObject
@property (nonatomic) NSArray jointPaths;
@property (nonatomic) MDLMatrix4x4Array jointBindTransforms;
@property (nonatomic) MDLMatrix4x4Array jointRestTransforms;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)jointPaths;
- (id)jointBindTransforms;
- (id)jointRestTransforms;
- (id)initWithName:jointPaths:;
@end
