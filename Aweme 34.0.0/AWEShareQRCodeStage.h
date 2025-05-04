@interface AWEShareQRCodeStage : AWEShareBaseStage
@property (nonatomic) BOOL shouldRun;
- (BOOL)checkShouldRun;
- (BOOL)prepareBeforeRun;
- (void)trackQRCodeVCShowWithBeginTime:;
- (void)run;
- (void)setShouldRun:;
- (BOOL)shouldRun;
@end
