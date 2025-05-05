@interface FBWorkspaceEventQueue : BSEventQueue
- (void)_noteWillCancelEventsWithName:count:;
- (void)_noteQueueDidUnlock;
- (void)_noteWillExecuteEvent:;
- (void)_noteWillPendEvents:atPosition:;
- (BOOL)_shouldProcessEvent:enqueuedDuringExecutionOfEvent:;
- (void)_noteQueueDidLock;
- (void)executeOrAppendEvent:;
- (void)executeOrPrependEvent:;
- (void)executeOrPrependEvents:;
+ (id)sharedInstance;
@end
