@interface UISelectionGrabberCustomPath : NSObject
@property (nonatomic) {CGPoint=dd} topPoint;
@property (nonatomic) {CGPoint=dd} bottomPoint;
@property (nonatomic) double lineWidth;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingRect;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingEdgeRect;
@property (nonatomic) BOOL containsZeroPoint;
- (void)setLineWidth:;
- (double)lineWidth;
- (id)boundingRect;
- (id)summaryDescription;
- (id)description;
- (BOOL)containsZeroPoint;
- (id)boundingEdgeRect;
- (id)topPoint;
- (void)setTopPoint:;
- (id)bottomPoint;
- (void)setBottomPoint:;
@end
