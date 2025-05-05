@interface IMAutomationBatchMessageOperations : NSObject
- (id)sendMessagesfromReplayDatabase:userInfo:error:;
- (id)beginRecordingMessagesToReplayDatabase:error:;
- (id)stopRecordingDatabaseError:;
@end
