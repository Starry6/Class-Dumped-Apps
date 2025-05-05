@interface PDFDetectedFormField : NSObject
@property (nonatomic) q kind;
@property (nonatomic) q index;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rect;
@property (nonatomic) q numberOfSegments;
@property (nonatomic) double segmentWidth;
@property (nonatomic) double minX;
@property (nonatomic) double maxX;
- (void)setKind:;
- (id)rect;
- (long long)kind;
- (long long)index;
- (void)setRect:;
- (void)setIndex:;
- (long long)numberOfSegments;
- (double)maxX;
- (double)minX;
- (double)minY;
- (double)maxY;
- (void)setNumberOfSegments:;
- (id)initWithRect:andKind:;
- (BOOL)canBeMergedWith:;
- (double)segmentWidth;
- (void)setSegmentWidth:;
@end
