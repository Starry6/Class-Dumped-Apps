@interface GEOComposedRouteCellularCoverage : NSObject
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithOffsets:coverage:routeLength:;
- (int)cellularCoverageAtOffset:;
- (void)enumerateCoverageRangesWithBlock:;
+ (BOOL)supportsSecureCoding;
@end
