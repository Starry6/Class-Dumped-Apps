@interface BKSHitTestRegion : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} exclusiveTouchNormalizedSubRectInReferenceSpace;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rect;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} exclusiveTouchNormalizedSubRect;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rect;
- (id)exclusiveTouchNormalizedSubRect;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithRect:exclusiveTouchSubRect:;
- (void)encodeWithCoder:;
- (id)_exclusiveTouchNormalizedSubRectInReferenceSpace;
- (id)initWithRect:;
- (id)_initWithRect:exclusiveTouchNormalizedSubRect:;
- (id)description;
- (void)appendDescriptionToFormatter:;
- (void)setExclusiveTouchNormalizedSubRect:;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
