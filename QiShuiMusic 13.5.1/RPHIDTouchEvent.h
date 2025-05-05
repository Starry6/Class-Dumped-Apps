@interface RPHIDTouchEvent : NSObject
@property (nonatomic) NSInteger finger;
@property (nonatomic) {CGPoint=dd} location;
@property (nonatomic) NSInteger phase;
@property (nonatomic) double timestampSeconds;
- (int)phase;
- (void)setPhase:;
- (id)location;
- (void)setLocation:;
- (void)setFinger:;
- (int)finger;
- (double)timestampSeconds;
- (void)setTimestampSeconds:;
@end
