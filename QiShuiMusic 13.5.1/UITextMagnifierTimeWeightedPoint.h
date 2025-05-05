@interface UITextMagnifierTimeWeightedPoint : NSObject
@property (nonatomic) {CGPoint=dd} weightedPoint;
- (id)displacementInInterval:;
- (void)clearHistory;
- (float)distanceCoveredInInterval:priorTo:;
- (id)diffFromLastPoint;
- (BOOL)isPlacedCarefully;
- (id)displacementInInterval:priorTo:;
- (BOOL)historyCovers:;
- (void)addPoint:;
- (float)distanceCoveredInInterval:;
- (id)weightedPoint;
@end
