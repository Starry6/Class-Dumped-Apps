@interface SASProximityBackupAction : SASProximityAction
@property (nonatomic) BOOL shouldStartBackup;
@property (nonatomic) BOOL finishedBackup;
@property (nonatomic) NSError error;
@property (nonatomic) double percentComplete;
@property (nonatomic) Q timeRemaining;
@property (nonatomic) NSDate completionDate;
- (double)percentComplete;
- (void)setError:;
- (void)setPercentComplete:;
- (id)error;
- (unsigned long long)timeRemaining;
- (void).cxx_destruct;
- (void)setCompletionDate:;
- (id)completionDate;
- (void)setTimeRemaining:;
- (id)requestPayload;
- (BOOL)shouldStartBackup;
- (void)setShouldStartBackup:;
- (BOOL)finishedBackup;
- (void)setFinishedBackup:;
+ (unsigned long long)actionID;
+ (id)actionFromDictionary:;
@end
