@interface IESLiveMultiVideoGiftController : NSObject
@property (nonatomic) IESLiveVideoGiftMetalConfiguration configuration;
@property (nonatomic) NSMutableDictionary callbackMap;
@property (nonatomic) NSObject<OS_dispatch_source> drawTimer;
@property (nonatomic) CHHapticEngine hapticEngine;
@property (nonatomic) NSObject<OS_dispatch_queue> asyncRenderQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> mtkRenderQueue;
@property (nonatomic) IESLiveVideoGiftMetalPlayer foregroundPlayer;
@property (nonatomic) IESLiveVideoGiftMetalPlayer backgroundPlayer;
@property (nonatomic) <IESLiveMultiVideoGiftControllerDelegate> delegate;
@property (nonatomic) IESLiveVideoGiftResourceModel model;
@property (nonatomic) Q state;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCallbackMap:;
- (float)audioPlayVolume;
- (void)pauseAllPlayers;
- (void)startPlayHaptic;
- (id)asyncRenderQueue;
- (id)backgroundPlayer;
- (id)callbackMap;
- (void)clearDrawTimer;
- (void)configMTKRenderQueue;
- (void)destroyAllPlayers;
- (void)destroyHapticEngine;
- (void)didApplicationDidBecomeActive:;
- (void)didApplicationDidEnterBackground:;
- (void)didStartPlayingAudioPlayer:;
- (id)drawTimer;
- (BOOL)enableCallbackForEvent:withPlayer:;
- (id)foregroundPlayer;
- (id)mtkRenderQueue;
- (void)playWithConfiguration:;
- (void)player:didEndPlayingFrame:;
- (void)player:didFinishPlayingWithError:;
- (void)player:didFrameCommandBufferCommitted:error:;
- (id)player:externalAudioPlayer:resource:error:;
- (void)player:frameCallBack:;
- (void)player:playingWithNonFatalError:;
- (void)player:prepareAudioWithSampleRate:channels:;
- (void)player:processAudioFrameWithRawData:samples:timestamp:;
- (void)player:sceneError:scene:;
- (BOOL)player:videoControllerShouldDelayPlayIfAudioResouces:;
- (void)player:willPlayFrame:;
- (void)pr_addNotification;
- (void)pr_didFinishPlayingWithForegroundError:backgroundError:;
- (void)renderCompletionWithForegroundError:backgroundError:;
- (void)reportAtPlayer:scene:sceneError:;
- (void)reportVibrateSceneError:;
- (void)resumeAllPlayers;
- (void)setAsyncRenderQueue:;
- (void)setBackgroundPlayer:;
- (void)setDrawTimer:;
- (void)setForegroundPlayer:;
- (void)setMtkRenderQueue:;
- (void)startDrawTimer;
- (void)startPlayAudioResources;
- (void)stopWithFinishPlayingCallback;
- (void)viewDidLoadOnPlayer:;
- (id)model;
- (void)seekToTime:;
- (id)init;
- (BOOL)isPlaying;
- (void)dealloc;
- (void)setModel:;
- (void)setState:;
- (void)setDelegate:;
- (void)stop;
- (void)setConfiguration:;
- (void)willResignActive:;
- (BOOL)resume;
- (id)configuration;
- (unsigned long long)state;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (BOOL)pause;
- (id)hapticEngine;
- (void)setHapticEngine:;
@end
