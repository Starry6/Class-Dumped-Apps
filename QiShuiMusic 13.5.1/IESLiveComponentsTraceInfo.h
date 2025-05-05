@interface IESLiveComponentsTraceInfo : NSObject
@property (nonatomic) Q stage;
@property (nonatomic) double start;
@property (nonatomic) double end;
@property (nonatomic) BOOL finished;
- (unsigned long long)stage;
- (void)setEnd:;
- (void)setFinished:;
- (void)setStart:;
- (double)end;
- (BOOL)finished;
- (double)start;
- (void)setStage:;
- (double)duration;
@end
