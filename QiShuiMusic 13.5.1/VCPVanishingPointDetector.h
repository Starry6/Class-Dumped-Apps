@interface VCPVanishingPointDetector : NSObject
- (id)initWithImage:;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)detect:withConfidence:dominantLine:;
- (int)prepareImage:;
- (int)calculateOrientationResponses;
- (void)extractUsefulAreaFrom:to:withOffset:stridePadded:width:height:;
- (void)averageOrientationResponses:withCurrentMap:;
- (int)generateOrientationMap;
- (void)smoothFiltering:width:height:;
- (int)voteVanishingPoint:;
- (int)searchVanishingPointandDominantLine:lineGroup:vanishingPoint:vanishingPointConfidence:dominantLine:;
- (int)calculateConfidence:lineDistance:vaninshingPoint:vanishingPointConfidence:;
- (BOOL)isVerticalOrHorizontal:;
- (int)generateLineWeightMap:weightMap:;
@end
