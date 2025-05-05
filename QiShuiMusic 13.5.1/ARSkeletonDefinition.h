@interface ARSkeletonDefinition : NSObject
@property (nonatomic) Q jointCount;
@property (nonatomic) NSArray jointNames;
@property (nonatomic) NSArray parentIndices;
@property (nonatomic) ARSkeleton3D neutralBodySkeleton3D;
- (void).cxx_destruct;
- (id)jointNames;
- (id)parentIndices;
- (unsigned long long)jointCount;
- (id)initDefault3DSkeletonDefinition;
- (id)initDefault2DSkeletonDefinition;
- (unsigned long long)indexForJointName:;
- (id)neutralBodySkeleton3D;
+ (id)defaultBody3DSkeletonDefinition;
+ (id)defaultBody2DSkeletonDefinition;
@end
