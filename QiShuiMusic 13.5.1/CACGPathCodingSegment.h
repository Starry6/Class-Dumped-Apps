@interface CACGPathCodingSegment : NSObject
- (void)addToCGPath:;
- (id)initWithCoder:;
- (id)initWithCGPathElement:;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end
