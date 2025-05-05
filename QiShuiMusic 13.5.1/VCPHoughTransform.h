@interface VCPHoughTransform : NSObject
- (void)dealloc;
- (id)initWithEdgeMap:mapWidth:mapHeight:angleStep:;
- (int)DetectLinesWithThreshold:output:;
- (void)Transform;
@end
