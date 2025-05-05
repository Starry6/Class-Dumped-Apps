@interface ARBody2D : NSObject
@property (nonatomic) ARSkeleton2D skeleton;
- (id)skeleton;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithSkeleton2D:;
+ (BOOL)supportsSecureCoding;
@end
