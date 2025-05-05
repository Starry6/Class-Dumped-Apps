@interface IESLiveSaaSAudioEffectProcessImp_Douyin : NSObject
@property (nonatomic) LiveStreamCapture liveCapture;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLiveCapture:;
- (void)applyAudioEffect:;
- (id)initWithLiveCoreCapture:;
- (id)liveCapture;
- (void)removeAudioEffect:;
- (void)setEchoAudioEffectEnable:;
- (void)cleanup;
- (void).cxx_destruct;
@end
