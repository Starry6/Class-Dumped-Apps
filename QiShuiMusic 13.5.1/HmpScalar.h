@interface HmpScalar : NSObject
@property (nonatomic) ^{Scalar=i(?=qd)} impl;
@property (nonatomic) BOOL own;
- (BOOL)own;
- (void)setOwn:;
- (BOOL)to_bool;
- (id)initFromBool:;
- (id)initFromFloat:;
- (id)initFromInt:;
- (id)initFromPtr::;
- (BOOL)is_boolean;
- (BOOL)is_floating_point;
- (BOOL)is_integral:;
- (double)to_float;
- (long long)to_int;
- (id)init;
- (void)dealloc;
- (id)ptr;
- (id)impl;
- (void)setImpl:;
@end
