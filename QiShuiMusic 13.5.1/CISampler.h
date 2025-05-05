@interface CISampler : NSObject
@property (nonatomic) CIFilterShape definition;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} extent;
- (id)definition;
- (id)_internalRepresentation;
- (id)initWithImage:;
- (id)init;
- (void)dealloc;
- (id)extent;
- (id)colorSpace;
- (id)debugDescription;
- (id)description;
- (id)copyWithZone:;
- (id)initWithImage:options:;
- (id)initWithImage:keysAndValues:;
- (id)_initWithImage:key0:vargs:;
- (id)opaqueShape;
- (id)wrapMode;
+ (id)samplerWithImage:;
+ (id)samplerWithImage:keysAndValues:;
+ (id)samplerWithImage:options:;
@end
