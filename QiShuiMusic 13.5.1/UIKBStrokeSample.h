@interface UIKBStrokeSample : NSObject
@property (nonatomic) {CGPoint=dd} point;
@property (nonatomic) double timestamp;
- (id)point;
- (void)setTimestamp:;
- (double)timestamp;
- (void)setPoint:;
- (id)initWithPoint:timestamp:;
@end
