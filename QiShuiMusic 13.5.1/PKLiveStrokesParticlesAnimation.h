@interface PKLiveStrokesParticlesAnimation : NSObject
@property (nonatomic) NSArray strokes;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} destinationFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
- (double)startTime;
- (void).cxx_destruct;
- (id)bounds;
- (double)duration;
- (void)_calculateBounds;
- (id)strokes;
- (BOOL)isDoneAtTime:;
- (id)initWithStrokes:startTime:duration:destinationFrame:;
- (id)destinationFrame;
@end
