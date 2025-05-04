@interface AWECurrentVideoPlayerFinder : NSObject
@property (nonatomic) <IESVideoPlayerProtocol> lastPlayer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)playerDidReadyForDisplay:;
- (void)player:didChangePlaybackStateWithAction:;
- (void)player:beInsertedSuccessWithPlaybackAction:;
- (id)lastPlayer;
- (void)setLastPlayer:;
- (void)trackPlayerIfNeeded:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (BOOL)isOnScreenPlayer:;
+ (id)sharedInstance;
@end
