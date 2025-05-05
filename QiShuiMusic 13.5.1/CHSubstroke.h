@interface CHSubstroke : NSObject
@property (nonatomic) CHEncodedStrokeIdentifier strokeIdentifier;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
@property (nonatomic) double startTimestamp;
@property (nonatomic) double endTimestamp;
@property (nonatomic) double curvature;
- (double)endTimestamp;
- (id)convexHull;
- (double)startTimestamp;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)bounds;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)strokeIdentifier;
- (id)initWithStrokeIdentifier:bounds:startTimestamp:endTimestamp:convexHull:curvature:;
- (BOOL)isEqualToSubstroke:;
- (double)curvature;
+ (BOOL)supportsSecureCoding;
+ (id)substrokesForStroke:;
@end
