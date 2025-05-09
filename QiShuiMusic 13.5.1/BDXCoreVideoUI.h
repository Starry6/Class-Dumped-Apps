@interface BDXCoreVideoUI : BDXHybridUI
@property (nonatomic) NSDictionary paramsDict;
@property (nonatomic) BDXVideoPlayerVideoModel videoModel;
@property (nonatomic) double seekTime;
@property (nonatomic) BOOL needReplay;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL isLoop;
@property (nonatomic) BOOL useSinglePlayer;
@property (nonatomic) BOOL needPreload;
@property (nonatomic) BOOL autoLifecycle;
@property (nonatomic) BOOL listenDeviceChange;
@property (nonatomic) NSNumber startTime;
@property (nonatomic) NSNumber volume;
@property (nonatomic) NSNumber rate;
@property (nonatomic) NSString posterURL;
@property (nonatomic) NSString fitMode;
@property (nonatomic) NSString control;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bdx_autolifecycle:requestReset:;
- (void)didBufferChange;
- (void)didSeek;
- (id)fitMode;
- (void)setNeedPreload:;
- (BOOL)useSinglePlayer;
- (void)__controlPlayerWithCommand:;
- (id)__resolveSrcAsJSON:;
- (id)__resolveSrcAsSchema:;
- (void)__setupVideoModel:;
- (BOOL)autoLifecycle;
- (void)bdx___control:requestReset:;
- (void)bdx_autoplay:requestReset:;
- (void)bdx_devicechangeaware:requestReset:;
- (void)bdx_inittime:requestReset:;
- (void)bdx_muted:requestReset:;
- (void)bdx_objectfit:requestReset:;
- (void)bdx_poster:requestReset:;
- (void)bdx_preload:requestReset:;
- (void)bdx_rate:requestReset:;
- (void)bdx_repeat:requestReset:;
- (void)bdx_singleplayer:requestReset:;
- (void)bdx_src:requestReset:;
- (void)bdx_volume:requestReset:;
- (void)didBufferChangeWithInfo:;
- (void)didDeviceChange:;
- (void)didFullscreenChange;
- (void)didTimeUpdate;
- (BOOL)listenDeviceChange;
- (BOOL)needPreload;
- (BOOL)needReplay;
- (id)paramsDict;
- (id)posterURL;
- (void)setAutoLifecycle:;
- (void)setFitMode:;
- (void)setIsLoop:;
- (void)setListenDeviceChange:;
- (void)setNeedReplay:;
- (void)setParamsDict:;
- (void)setPosterURL:;
- (void)setUseSinglePlayer:;
- (void)setVideoModel:;
- (id)videoModel;
- (BOOL)mute;
- (void)setRate:;
- (id)volume;
- (void)setVolume:;
- (id)rate;
- (void)setStartTime:;
- (id)startTime;
- (void)setMute:;
- (void).cxx_destruct;
- (BOOL)isLoop;
- (void)setSeekTime:;
- (void)didEnd;
- (double)seekTime;
- (id)control;
- (void)setControl:;
- (void)didError;
- (BOOL)autoPlay;
- (void)setAutoPlay:;
- (id)createView;
- (void)didPause;
- (void)didPlay;
+ (id)tagName;
@end
