@interface CHSubstrokePlacement : NSObject
@property (nonatomic) CHSubstroke substroke;
@property (nonatomic) {CGVector=dd} writingOrientation;
@property (nonatomic) {CGVector=dd} strokeDeviation;
@property (nonatomic) q originalWritingDirectionIndex;
@property (nonatomic) {CGPoint=dd} coalescedCenter;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rotatedBounds;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)orientationTransform;
- (id)copyWithZone:;
- (id)rotatedBounds;
- (id)initWithSubstroke:;
- (id)orientedBounds;
- (id)substroke;
- (id)writingOrientation;
- (void)setWritingOrientation:;
- (id)strokeDeviation;
- (void)setStrokeDeviation:;
- (long long)originalWritingDirectionIndex;
- (void)setOriginalWritingDirectionIndex:;
- (id)coalescedCenter;
- (void)setCoalescedCenter:;
+ (BOOL)supportsSecureCoding;
@end
