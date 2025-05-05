@interface BWZoomRange : NSObject
@property (nonatomic) float lowerBound;
@property (nonatomic) float upperBound;
@property (nonatomic) float fudgedLowerBound;
@property (nonatomic) float fudgedUpperBound;
- (unsigned long long)hash;
- (id)description;
- (float)applyFudgeToZoomFactor:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (float)lowerBound;
- (float)upperBound;
- (id)initWithLowerBound:upperBound:fudgedLowerBound:fudgedUpperBound:;
- (id)initWithLowerBound:upperBound:;
- (float)fudgedLowerBound;
- (float)fudgedUpperBound;
+ (id)zoomRangeWithLower:upperBound:;
+ (id)fudgedZoomRangeWithLower:upperBound:fudgedLowerBound:fudgedUpperBound:;
@end
