@interface AVPlayerLooper : NSObject
@property (nonatomic) q status;
@property (nonatomic) NSError error;
@property (nonatomic) q loopCount;
@property (nonatomic) NSArray loopingPlayerItems;
- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)error;
- (long long)status;
- (void)disableLooping;
- (long long)loopCount;
- (id)initWithPlayer:templateItem:timeRange:;
- (void)_changeStatusToFailedWithError:;
- (id)loopingPlayerItems;
- (void)_configureLoopingItem:;
- (int)_calculateNumberOfCopiesNeeded;
- (BOOL)_setupLoopingReturningError:;
- (void)_turnOffLooping;
- (BOOL)_isWaitingForLastCopyToFinishSet;
- (void)_cleanupAfterPlayingLastLoopingCopy;
+ (id)playerLooperWithPlayer:templateItem:;
+ (id)playerLooperWithPlayer:templateItem:timeRange:;
@end
