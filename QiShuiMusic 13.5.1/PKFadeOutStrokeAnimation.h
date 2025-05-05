@interface PKFadeOutStrokeAnimation : NSObject
@property (nonatomic) PKStroke stroke;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
- (double)startTime;
- (void).cxx_destruct;
- (double)duration;
- (id)stroke;
- (id)initWithStroke:startTime:duration:;
- (id)newStrokeAtTime:;
- (BOOL)isDoneAtTime:;
@end
