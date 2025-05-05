@interface CHSegmentDescriptor : NSObject
@property (nonatomic) NSNumber segmentID;
@property (nonatomic) CHCutPoint startCutPoint;
@property (nonatomic) CHCutPoint endCutPoint;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} segmentBounds;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} contextBounds;
- (void).cxx_destruct;
- (long long)strokeCount;
- (id)initWithSegmentID:startCutPoint:endCutPoint:referenceDrawing:;
- (id)strokeIndexSet;
- (BOOL)isSinglePointSegment;
- (id)segmentID;
- (id)startCutPoint;
- (id)endCutPoint;
- (id)segmentBounds;
- (id)contextBounds;
- (void)setContextBounds:;
+ (id)generateSegmentsFromDrawing:;
+ (id)boundingBoxFromSegmentID:toSegmentID:withSegments:withSourceDrawing:;
+ (long long)indexForSegmentID:fromSegments:;
@end
