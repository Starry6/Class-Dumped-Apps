@interface AWEIronManDynamicItem : NSObject
@property (nonatomic) {CGPoint=dd} center;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
@property (nonatomic) {CGAffineTransform=dddddd} transform;
@property (nonatomic) Q collisionBoundsType;
@property (nonatomic) UIBezierPath collisionBoundingPath;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)transform;
- (id)bounds;
- (void)setTransform:;
- (id)center;
- (void)setCenter:;
@end
