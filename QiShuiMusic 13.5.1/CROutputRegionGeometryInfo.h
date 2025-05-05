@interface CROutputRegionGeometryInfo : CRImageSpaceQuad
@property (nonatomic) {CGSize=dd} cachedSize;
@property (nonatomic) double estimatedLineHeight;
@property (nonatomic) {CGVector=dd} baselineVector;
- (id)cachedSize;
- (void)setCachedSize:;
- (id)size;
- (id)initFromOutputRegion:;
- (id)mutualGeometryInfoWith:;
- (double)estimatedLineHeight;
- (id)baselineVector;
@end
