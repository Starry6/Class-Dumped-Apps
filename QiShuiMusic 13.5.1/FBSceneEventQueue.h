@interface FBSceneEventQueue : BSEventQueue
@property (nonatomic) <FBSceneEventQueueDelegate> delegate;
- (void)_noteQueueDidUnlock;
- (void)_noteWillExecuteEvent:;
- (void)_noteQueueDidDrain;
- (void)_noteWillPendEvents:atPosition:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
