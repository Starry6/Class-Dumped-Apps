@interface CHDrawingSegmentGroup : NSObject
@property (nonatomic) q segmentGroupIndex;
@property (nonatomic) NSArray segments;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
@property (nonatomic) q totalSegmentCount;
- (id)segments;
- (void).cxx_destruct;
- (id)bounds;
- (id)initWithSegmentGroupIndex:segments:;
- (long long)totalSegmentCount;
- (long long)segmentGroupIndex;
@end
