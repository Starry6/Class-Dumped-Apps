@interface TLAlertSystemSoundStopTasksDescriptor : NSObject
@property (nonatomic) NSMapTable interruptedAlertsToSound;
@property (nonatomic) NSArray playbackCompletionContextsToProcess;
@property (nonatomic) TLAlertStoppingOptions options;
@property (nonatomic) q playbackCompletionType;
- (void)setOptions:;
- (id)options;
- (void).cxx_destruct;
- (long long)playbackCompletionType;
- (void)setPlaybackCompletionType:;
- (id)interruptedAlertsToSound;
- (void)setInterruptedAlertsToSound:;
- (id)playbackCompletionContextsToProcess;
- (void)setPlaybackCompletionContextsToProcess:;
@end
