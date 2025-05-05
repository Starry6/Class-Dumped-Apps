@interface TSPKDetectReleaseTask : TSPKDetectTask
@property (nonatomic) BOOL ignoreSameReport;
- (id)checkIfRecordingStopped:atTimeStamp:;
- (void)executeWithInstanceAddress:;
- (void)handleDetectResult:detectTimeStamp:store:info:;
- (BOOL)ignoreSameReport;
- (void)setIgnoreSameReport:;
- (void)execute;
- (void)setup;
@end
