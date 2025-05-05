@interface IESSaaSVSComponentTrackerItemInfo : NSObject
@property (nonatomic) Q stage;
@property (nonatomic) double start;
@property (nonatomic) double end;
@property (nonatomic) BOOL isFinished;
- (unsigned long long)stage;
- (void)setEnd:;
- (void)setStart:;
- (double)end;
- (double)start;
- (void)setStage:;
- (BOOL)isFinished;
- (double)duration;
- (void)setIsFinished:;
@end
