@interface IESLiveSaaSEffectProcessLifyCycleImp_Douyin : NSObject
@property (nonatomic) LiveStreamCapture liveCapture;
@property (nonatomic) IESLiveSaaSVideoEffectProcessImp_Douyin effectProcesser;
@property (nonatomic) IESLiveSaaSAudioEffectProcessImp_Douyin audioProcesser;
@property (nonatomic) <IESLiveSaaSRecoder> recoder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLiveCapture:;
- (id)effectProcesser;
- (id)recoder;
- (id)attachingDIContext;
- (id)audioProcesser;
- (void)bindRecoderWithFirstRenderCallback:;
- (void)cleanupVideoEffectProvider;
- (void)enableRepushFrame:;
- (id)liveCapture;
- (id)liveCoreStreamCapture;
- (void)loadVideoEffectProviderWith:;
- (void)setAudioProcesser:;
- (void)setEffectProcesser:;
- (id)transferLiveStreamConfig:;
- (void).cxx_destruct;
+ (void)ieslivekit_xstone_binding_template;
@end
