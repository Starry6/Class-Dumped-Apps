@interface MDLTransformRotateOp : NSObject
@property (nonatomic) BOOL inverse;
@property (nonatomic) Q order;
@property (nonatomic) NSString name;
@property (nonatomic) MDLAnimatedVector3 animatedValue;
- (unsigned long long)order;
- (BOOL)inverse;
- (void).cxx_destruct;
- (id)name;
- (void)setOrder:;
- (void)setInverse:;
- (id)float4x4AtTime:;
- (id)double4x4AtTime:;
- (BOOL)IsInverseOp;
- (id)animatedValue;
- (id)initWithName:inverse:order:data:;
@end
