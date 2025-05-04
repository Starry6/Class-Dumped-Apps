@interface AWEMemoriesPlayer : NSObject
@property (nonatomic) NLEInterface_OC session;
@property (nonatomic) NLEModel_OC nleModel;
@property (nonatomic) <AWEMemoriesPlayerDelegate> delegate;
@property (nonatomic) BOOL muted;
- (id)nleModel;
- (void)setNleModel:;
- (void)playModel:displayView:delegate:;
- (void)captureCoverWithCacheKey:completion:;
- (void)setSession:;
- (id)delegate;
- (void)setMuted:;
- (id)session;
- (void).cxx_destruct;
- (BOOL)isMuted;
- (void)setDelegate:;
- (void)start;
- (void)pause;
- (void)resetViews;
- (void)setupIfNeeded;
- (void)releaseSession;
+ (id)sharedPlayer;
@end
