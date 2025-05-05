@interface MSPauseManager : NSObject
@property (nonatomic) <MSPauseManagerDelegate> delegate;
- (void)_timerDidFire:;
- (id)init;
- (void)_addPauseUUID:;
- (void)dealloc;
- (void)setDelegate:;
- (void)pingPauseUUID:;
- (BOOL)isPaused;
- (id)delegate;
- (void).cxx_destruct;
- (void)unpauseUUID:;
- (void)_removeTimerUUID:;
+ (id)sharedManager;
@end
