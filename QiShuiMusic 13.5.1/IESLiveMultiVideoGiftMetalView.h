@interface IESLiveMultiVideoGiftMetalView : UIView
@property (nonatomic) BOOL enableRender;
@property (nonatomic) BOOL hasDestroyed;
@property (nonatomic) BOOL hasSetupGL;
@property (nonatomic) {CGSize=dd} currentSize;
@property (nonatomic) IESLiveMultiVideoMetalRenderer metalRenderer;
@property (nonatomic) IESLiveAssetReaderOutput output;
@property (nonatomic) @? process;
@property (nonatomic) @? completion;
@property (nonatomic) IESLiveVideoGiftResourceInfo model;
@property (nonatomic) MTKView mtkView;
@property (nonatomic) Q renderContentMode;
@property (nonatomic) @? framePlayDurationCallBack;
@property (nonatomic) @? frameCallBackBeforePlaying;
@property (nonatomic) @? frameCallBackAfterPlaying;
@property (nonatomic) @? frameCallBackAfterCmdBufCommit;
@property (nonatomic) @? viewDidLoadBlock;
@property (nonatomic) BOOL removedOnCompletion;
@property (nonatomic) BOOL useDrawTimer;
@property (nonatomic) BOOL enableVideoSR;
@property (nonatomic) IESLiveVideoGiftMetalConfiguration configuration;
- (BOOL)enableRender;
- (BOOL)enableVideoSR;
- (id)frameCallBackAfterCmdBufCommit;
- (id)frameCallBackAfterPlaying;
- (id)frameCallBackBeforePlaying;
- (id)framePlayDurationCallBack;
- (BOOL)hasDestroyed;
- (BOOL)hasSetupGL;
- (BOOL)isUsingDrawTimer;
- (id)mtkViewFrame;
- (unsigned long long)renderContentMode;
- (void)renderMTKView;
- (void)renderOutput:resourceModel:process:completion:;
- (void)setEnableRender:;
- (void)setEnableVideoSR:;
- (void)setFrameCallBackAfterCmdBufCommit:;
- (void)setFrameCallBackAfterPlaying:;
- (void)setFrameCallBackBeforePlaying:;
- (void)setFramePlayDurationCallBack:;
- (void)setHasDestroyed:;
- (void)setHasSetupGL:;
- (void)setMetalRenderer:;
- (void)setRenderContentMode:;
- (void)setUseDrawTimer:;
- (void)setViewDidLoadBlock:;
- (double)totalDurationOfPlayingEffect;
- (id)viewDidLoadBlock;
- (id)completion;
- (id)output;
- (id)model;
- (void)setCompletion:;
- (void)seekToTime:;
- (void)dealloc;
- (void)setModel:;
- (void)layoutSubviews;
- (id)currentSize;
- (void)setOutput:;
- (void)setCurrentSize:;
- (void)setConfiguration:;
- (void)setProcess:;
- (id)metalRenderer;
- (id)initWithFrame:;
- (id)configuration;
- (void)destroy;
- (id)process;
- (void).cxx_destruct;
- (double)currentTime;
- (BOOL)removedOnCompletion;
- (void)setRemovedOnCompletion:;
- (id)mtkView;
- (void)setMtkView:;
- (void)setupMetal;
@end
