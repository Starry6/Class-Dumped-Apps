@interface CPColumnMaker : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} pageBounds;
- (id)columns;
- (id)init;
- (void)dealloc;
- (id)pageBounds;
- (void)setPageBounds:;
- (BOOL)intervalOverlapLeft:right:paragraphs:;
- (void)partitionShapes:;
- (BOOL)cuttingShapeBetween:and:;
- (BOOL)paragraph:notOnSameShapeAs:;
- (BOOL)paragraph:isAbove:;
- (BOOL)paragraph:isBelow:;
- (id)paragraphBelow:in:;
- (id)paragraphAbove:in:;
- (id)chunkAbove:in:;
- (BOOL)paragraph:isLinkedBelowTo:;
- (BOOL)column:isLinkedBelowTo:;
- (BOOL)canSafelyAdd:to:;
- (void)intersectionCallout:;
- (void)callOuts;
- (BOOL)closeImagesBetween:and:bounds:;
- (double)averageSpacing:;
- (void)splitColumns:;
- (void)anchorImages;
- (void)makeColumnsFrom:zone:;
@end
