@interface IESECPDPState : NSObject
@property (nonatomic) q currentMode;
@property (nonatomic) double currentPercent;
@property (nonatomic) BOOL renderedFirst;
@property (nonatomic) BOOL packFinished;
@property (nonatomic) BOOL packDetailFinished;
- (void)receicveAction:;
- (double)currentPercent;
- (BOOL)packDetailFinished;
- (BOOL)packFinished;
- (BOOL)renderedFirst;
- (void)setCurrentPercent:;
- (void)setPackDetailFinished:;
- (void)setPackFinished:;
- (void)setRenderedFirst:;
- (long long)currentMode;
- (void)setCurrentMode:;
@end
