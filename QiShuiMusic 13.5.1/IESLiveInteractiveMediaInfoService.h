@interface IESLiveInteractiveMediaInfoService : NSObject
@property (nonatomic) <IESLiveRealStreamingProviderAdapter> streamProvider;
@property (nonatomic) q normalAudioBitrate;
@property (nonatomic) q ktvAudioBitrate;
@property (nonatomic) NSDictionary ktvLiveCoreInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ktvLiveCoreInfo;
- (long long)ktvAudioBitrate;
- (void)didEndKTVWithPlayMode:;
- (void)didSetAttachingDIContext;
- (void)didStartKTVWithPlayMode:;
- (long long)normalAudioBitrate;
- (void)setKtvAudioBitrate:;
- (void)setKtvLiveCoreInfo:;
- (void)setNormalAudioBitrate:;
- (void)willUpdateStreamConfigWithParams:;
- (id)streamProvider;
- (void)setStreamProvider:;
- (void).cxx_destruct;
- (void)messageReceived:;
@end
