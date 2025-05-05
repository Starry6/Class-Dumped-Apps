@interface SCNBoundingSphere : NSObject
@property (nonatomic) {SCNVector3=fff} center;
@property (nonatomic) double radius;
- (id)center;
- (void)setRadius:;
- (void)setCenter:;
- (double)radius;
- (id)description;
@end
