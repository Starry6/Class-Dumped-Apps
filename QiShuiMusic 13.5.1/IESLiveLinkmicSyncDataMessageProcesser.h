@interface IESLiveLinkmicSyncDataMessageProcesser : IESLiveMessageProcesser
- (BOOL)canProcessMessage:;
- (id)init;
- (BOOL)process:;
@end
