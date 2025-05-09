@interface BDXAlphaVideoUI : BDXHybridUI
@property (nonatomic) IESLiveVideoGiftController videoController;
@property (nonatomic) BOOL loop;
@property (nonatomic) Q loopCount;
@property (nonatomic) BOOL autoplay;
@property (nonatomic) BOOL keepVideoLastframe;
@property (nonatomic) BOOL keepPreviousView;
@property (nonatomic) BOOL layoutFinished;
@property (nonatomic) BOOL videoPreparedFinished;
@property (nonatomic) BOOL playSuccessTriggerFlag;
@property (nonatomic) BOOL enableLogInfo;
@property (nonatomic) BOOL enableAsyncRender;
@property (nonatomic) NSURL unzipURL;
@property (nonatomic) NSURL videoURL;
@property (nonatomic) UIImageView firstFrameImageView;
@property (nonatomic) UIImageView lastFrameImageView;
@property (nonatomic) UIView containerView;
@property (nonatomic) NSMutableDictionary subscribedMilliseconds;
@property (nonatomic) BOOL isVideoPlaying;
@property (nonatomic) <BDXAlphaVideoUIDelegate> uiDelegate;
@property (nonatomic) NSNumber videoDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bdx_keepLastframe:requestReset:;
- (void)updateFrameSize;
- (void)bdx_autoplay:requestReset:;
- (void)bdx_getDuration:requestReset:;
- (void)bdx_iosAsyncRender:requestReset:;
- (void)bdx_isPlaying:requestReset:;
- (void)bdx_keepPreviousView:requestReset:;
- (void)bdx_lastframe:requestReset:;
- (void)bdx_loop:requestReset:;
- (void)bdx_pause:requestReset:;
- (void)bdx_play:requestReset:;
- (void)bdx_poster:requestReset:;
- (void)bdx_release:requestReset:;
- (void)bdx_resume:requestReset:;
- (void)bdx_seek:requestReset:;
- (void)bdx_src:requestReset:;
- (void)bdx_stop:requestReset:;
- (void)bdx_subscribeUpdateEvent:requestReset:;
- (void)bdx_unsubscribeUpdateEvent:requestReset:;
- (void)didFinishPlayingWithError:;
- (BOOL)enableAsyncRender;
- (BOOL)enableLogInfo;
- (id)firstFrameImageView;
- (void)frameCallBack:;
- (id)getVideoDuration;
- (BOOL)keepPreviousView;
- (BOOL)keepVideoLastframe;
- (id)lastFrameImageView;
- (void)layoutDidFinished;
- (BOOL)playSuccessTriggerFlag;
- (void)playVideoIfVideoPrepared;
- (void)prepareVideoWithURL:;
- (void)prepareVideoWithZipURL:;
- (void)releaseVideo;
- (void)reportErrorMessage:resourceURL:message:;
- (void)reportErrorToLynxAndElementMonitor:resourceURL:message:;
- (void)reportInfoToLynx:resourceURL:;
- (void)resetSubscribedMillisecondsTrigger;
- (void)resumeVideo;
- (void)seekToVideo:;
- (void)sendErrorEventWithCode:resourceURL:message:;
- (void)setEnableAsyncRender:;
- (void)setEnableLogInfo:;
- (void)setFirstFrameImageView:;
- (void)setKeepPreviousView:;
- (void)setKeepVideoLastframe:;
- (void)setLastFrameImageView:;
- (void)setLayoutFinished:;
- (void)setPlaySuccessTriggerFlag:;
- (void)setSubscribedMilliseconds:;
- (void)setUnzipURL:;
- (void)setVideoPreparedFinished:;
- (id)subscribedMilliseconds;
- (id)unzipURL;
- (void)videoGiftController:didEndPlayingFrame:;
- (BOOL)videoPreparedFinished;
- (id)init;
- (id)videoURL;
- (unsigned long long)getState;
- (id)uiDelegate;
- (id)containerView;
- (BOOL)isPrepared;
- (void)setUiDelegate:;
- (void)setContainerView:;
- (id)videoDuration;
- (void)setVideoURL:;
- (void).cxx_destruct;
- (BOOL)loop;
- (unsigned long long)loopCount;
- (void)setVideoDuration:;
- (BOOL)isVideoPlaying;
- (id)createView;
- (id)videoController;
- (void)setVideoController:;
- (void)setIsVideoPlaying:;
- (void)pauseVideo;
- (void)setLoop:;
- (BOOL)autoplay;
- (void)setAutoplay:;
- (void)stopVideo;
- (BOOL)layoutFinished;
- (void)setLoopCount:;
+ (id)tagName;
@end
