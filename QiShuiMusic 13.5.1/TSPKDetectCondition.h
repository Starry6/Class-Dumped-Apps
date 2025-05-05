@interface TSPKDetectCondition : NSObject
@property (nonatomic) double timeGapToCancelDetect;
@property (nonatomic) double timeGapToIgnoreStatus;
- (void)setTimeGapToCancelDetect:;
- (void)setTimeGapToIgnoreStatus:;
- (double)timeGapToCancelDetect;
- (double)timeGapToIgnoreStatus;
@end
