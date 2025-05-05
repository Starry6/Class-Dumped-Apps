@interface IESECReviewsDetailPlayerManager : NSObject
@property (nonatomic) q activatedSectionIndex;
@property (nonatomic) q activatedRowIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)playerIsPlaying;
- (long long)activatedRowIndex;
- (long long)activatedSectionIndex;
- (void)addDelegateTarget:;
- (void)playerDidChangePlaybackStateWithAction:;
- (void)playerDidReadyForDisplay;
- (void)playerPlayTime:canPlayTime:totalTime:;
- (id)playerWithTarget:playerWillBeGrabbedByTarget:;
- (void)seekPlayerToTime:;
- (void)setActivatedRowIndex:;
- (void)setActivatedSectionIndex:;
- (void)applicationWillResignActive:;
- (id)init;
- (void)dealloc;
- (void)play;
- (void)applicationDidBecomeActive:;
- (void).cxx_destruct;
- (void)pause;
- (void)stopPlaying;
@end
