@interface PKDrawingReplayPoint : NSObject
@property (nonatomic) Q type;
@property (nonatomic) {CGPoint=dd} point;
@property (nonatomic) double delay;
- (id)point;
- (void)setType:;
- (double)delay;
- (void)setDelay:;
- (unsigned long long)type;
- (void)setPoint:;
- (id)pkInputPointWithOffset:;
@end
