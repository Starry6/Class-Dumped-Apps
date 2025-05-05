@interface ARSkeleton : NSObject
@property (nonatomic) ARSkeletonDefinition definition;
@property (nonatomic) Q jointCount;
- (id)definition;
- (id)initPrivate;
- (void).cxx_destruct;
- (unsigned long long)jointCount;
- (BOOL)isJointTracked:;
@end
