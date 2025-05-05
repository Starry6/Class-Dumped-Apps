@interface TIHandwritingStrokes : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)addPoint:;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (id)copyWithZone:;
- (id)pointAtIndex:inStrokeAtIndex:;
- (unsigned long long)numberOfPointsInStrokeAtIndex:;
- (void)removeStrokeAtIndex:;
- (void)removeAllStrokes;
- (unsigned long long)numberOfStrokes;
- (void)endStroke;
- (unsigned long long)totalNumberOfPoints;
+ (BOOL)supportsSecureCoding;
@end
