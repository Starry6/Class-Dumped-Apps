@interface AWEAutoCaptionAudioExportor : NSObject
@property (nonatomic) VEAudioResampler audioResampler;
@property (nonatomic) ACCAudioExport audioExport;
@property (nonatomic) NSObject<ACCEditVideoDataProtocol> videoData;
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) NSArray audioHandlers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)publishModel;
- (void)setPublishModel:;
- (id)initWithPublishModel:;
- (void)exportAudioWithCompletion:;
- (id)audioHandlers;
- (id)audioExport;
- (id)audioResampler;
- (void)setAudioResampler:;
- (void)setAudioExport:;
- (void)setAudioHandlers:;
- (id)generateHandlers:;
- (void).cxx_destruct;
- (void)setVideoData:;
- (id)videoData;
@end
