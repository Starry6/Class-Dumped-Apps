@interface AWESearchMusicLynxElement : LynxUI
@property (nonatomic) NSString containerID;
@property (nonatomic) AWESearchMusicListPlayerManager musicPlayer;
@property (nonatomic) NSArray currentMusicList;
@property (nonatomic) BOOL enterMusicdetail;
@property (nonatomic) BOOL pauseMusicByUser;
@property (nonatomic) BOOL cancleMusic;
@property (nonatomic) BOOL hasActived;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <SearchDynamicElementStatusDelegate> statusDelegate;
@property (nonatomic) q transitionIndex;
- (void)play:withResult:;
- (void)pause:withResult:;
- (void)logExtra:requestReset:;
- (void)addNotification;
- (void)seek:withResult:;
- (BOOL)isMediaSourceCard;
- (void)sessionid:requestReset:;
- (id)getLynxElementType;
- (id)currentMusicList;
- (void)cancleMusicPlay;
- (void)setCancleMusic:;
- (void)setPauseMusicByUser:;
- (BOOL)pauseMusicByUser;
- (BOOL)cancleMusic;
- (void)musicListPlayerManagerMusicChanged:index:;
- (void)musicListPlayerManagerPlaybackTimeChanged:playbackTime:;
- (void)musicListPlayerManagerPlayStatusChanged:;
- (void)musicListPlayerManagerDidPauseWithPauseType:;
- (BOOL)enterMusicdetail;
- (id)creatMusicModelWithParams:;
- (void)setCurrentMusicList:;
- (void)updateMusicDataWithStorageKey:;
- (void)setEnterMusicdetail:;
- (void)setMusicListModelsWithParams:;
- (void)sendPlaybackTimeChangedEvent;
- (void)setHasActived:;
- (void)changebackgroundcolor:withResult:;
- (void)changecollectionstatus:withResult:;
- (void)opensearchmusicdetail:withResult:;
- (void)loadlyrics:withResult:;
- (void)loadmorecomplete:withResult:;
- (BOOL)hasActived;
- (void)didBecomeActive;
- (void)setStatusDelegate:;
- (void)setContainerID:;
- (id)videoView;
- (void)didResignActive;
- (id)transitionContext;
- (id)containerID;
- (void).cxx_destruct;
- (id)statusDelegate;
- (void)viewDidAppear;
- (void)setMusicPlayer:;
- (id)createView;
- (id)musicPlayer;
+ (id)__lynx_prop_config__761;
+ (id)__lynx_ui_method_config__1596;
+ (id)__lynx_prop_config__680;
+ (id)__lynx_ui_method_config__872;
+ (id)__lynx_ui_method_config__1423;
+ (id)__lynx_ui_method_config__1474;
+ (id)__lynx_ui_method_config__1525;
+ (id)__lynx_ui_method_config__1717;
+ (id)__lynx_ui_method_config__1888;
+ (id)__lynx_ui_method_config__2129;
@end
