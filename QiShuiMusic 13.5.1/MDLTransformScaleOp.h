@interface MDLTransformScaleOp : NSObject
@property (nonatomic) BOOL inverse;
@property (nonatomic) NSString name;
@property (nonatomic) MDLAnimatedVector3 animatedValue;
- (BOOL)inverse;
- (void).cxx_destruct;
- (id)name;
- (void)setInverse:;
- (id)float4x4AtTime:;
- (id)double4x4AtTime:;
- (BOOL)IsInverseOp;
- (id)initWithName:inverse:data:;
- (id)animatedValue;
@end
