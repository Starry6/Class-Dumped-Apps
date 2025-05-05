@interface IESLiveLinkRTCInteractCompositeParam : NSObject
@property (nonatomic) IESLiveLinkRTCInteractTranscodingVideoLayout layout;
@property (nonatomic) IESLiveLinkRTCInteractTranscodingVideoConfig video;
@property (nonatomic) IESLiveLinkRTCInteractTranscodingAudioConfig audio;
@property (nonatomic) NSMutableDictionary advancedConfig;
@property (nonatomic) BOOL compositingChanged;
- (BOOL)compositingChanged;
- (void)setCompositingChanged:;
- (id)advancedConfig;
- (void)setAdvancedConfig:;
- (void)setLayout:;
- (id)layout;
- (void).cxx_destruct;
- (void)setVideo:;
- (id)video;
- (id)audio;
- (void)setAudio:;
@end
