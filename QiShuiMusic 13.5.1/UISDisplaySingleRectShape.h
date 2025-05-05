@interface UISDisplaySingleRectShape : UISDisplayShape
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rect;
@property (nonatomic) NSString displayShapeName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rect;
- (id)displayShapeName;
- (id)rect;
- (void)encodeWithXPCDictionary:;
- (unsigned long long)hash;
- (id)initWithXPCDictionary:;
- (id)initWithRect:;
- (id)description;
- (BOOL)isEqual:;
@end
