@interface BDXLynxVideoPlayerPro : UIView
@property (nonatomic) TTVideoEngine videoEngine;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) BOOL inBackground;
@property (nonatomic) BOOL willResumeWhileActive;
@property (nonatomic) BOOL inListReusePool;
@property (nonatomic) BOOL createEngineEveryTime;
@property (nonatomic) BDXLynxVideoProModel playingModel;
@property (nonatomic) <BDXLynxVideoProUIProtocol> uiDelegate;
@property (nonatomic) BOOL renderByMetal;
@property (nonatomic) BOOL asyncClose;
@property (nonatomic) BOOL asyncPrepare;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setVideoEngine:;
- (BOOL)inListReusePool;
- (void)videoEngine:mdlKey:hitCacheSze:;
- (id)apiForFetcher:;
- (BOOL)asyncClose;
- (BOOL)asyncPrepare;
- (id)coverImageView;
- (BOOL)createEngineEveryTime;
- (void)mute:;
- (void)onListCellAppear:withList:;
- (void)onListCellDisappear:exist:withList:;
- (void)onListCellPrepareForReuse:withList:;
- (void)playerBecomeActive;
- (void)playerEnterBackground;
- (id)playingModel;
- (void)prepareVideo:;
- (BOOL)renderByMetal;
- (void)seek:completion:;
- (void)setAsyncClose:;
- (void)setAsyncPrepare:;
- (void)setCoverImageView:;
- (void)setCreateEngineEveryTime:;
- (void)setInListReusePool:;
- (void)setPlayingModel:;
- (void)setRenderByMetal:;
- (void)setWillResumeWhileActive:;
- (void)tryFetchVideo;
- (void)unfocusedMute:;
- (id)videoEngine;
- (void)videoEngine:loadStateDidChanged:;
- (void)videoEngine:playbackStateDidChanged:;
- (void)videoEngine:retryForError:;
- (void)videoEngineCloseAysncFinish:;
- (void)videoEngineDidFinish:error:;
- (void)videoEngineDidFinish:videoStatusException:;
- (void)videoEnginePrepared:;
- (void)videoEngineReadyToDisPlay:;
- (void)videoEngineUserStopped:;
- (BOOL)willResumeWhileActive;
- (id)init;
- (void)dealloc;
- (id)uiDelegate;
- (void)play;
- (void)setFrame:;
- (void)setUiDelegate:;
- (void)stop;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)pause;
- (BOOL)inBackground;
- (void)setInBackground:;
@end
