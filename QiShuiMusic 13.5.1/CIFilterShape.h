@interface CIFilterShape : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} extent;
- (void)dealloc;
- (id)extent;
- (id)initWithRect:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithStruct:;
- (id)transformBy:interior:;
- (id)insetByX:Y:;
- (id)unionWith:;
- (id)unionWithRect:;
- (id)intersectWith:;
- (id)intersectWithRect:;
- (id)CGSRegion;
+ (id)_shapeInfinite;
+ (id)shapeWithRect:;
@end
