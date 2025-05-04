@interface AWEFeedPlayerProtector : NSObject
@property (nonatomic) NSDictionary feedPlayConfigDict;
@property (nonatomic) @? pauseFeedPlayer;
- (void)realCheckFeedPlayerLeaksSound;
- (double)feedLeakDetectDelay;
- (BOOL)player:inViewController:;
- (id)feedPushAllowPlayList;
- (id)feedDisallowPlayTopVCList;
- (id)pauseFeedPlayer;
- (long long)nextResponderMaxStep;
- (id)feedPlayConfigDict;
- (void)checkFeedPlayerLeaksSound;
- (id)topResponderForView:;
- (BOOL)enableResetPrventPause;
- (void)setPauseFeedPlayer:;
- (void)setFeedPlayConfigDict:;
- (void).cxx_destruct;
- (void)pause;
@end
