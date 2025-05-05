@interface UIDynamicItemGroup : NSObject
@property (nonatomic) NSArray items;
@property (nonatomic) {CGPoint=dd} center;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
@property (nonatomic) {CGAffineTransform=dddddd} transform;
@property (nonatomic) Q collisionBoundsType;
@property (nonatomic) UIBezierPath collisionBoundingPath;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithItems:;
- (id)center;
- (void)setCenter:;
- (id)items;
- (void)setTransform:;
- (id)transform;
- (void).cxx_destruct;
- (id)bounds;
@end
