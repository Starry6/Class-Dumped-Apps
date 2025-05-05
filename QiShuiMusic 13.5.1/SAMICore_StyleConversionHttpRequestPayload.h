@interface SAMICore_StyleConversionHttpRequestPayload : NSObject
@property (nonatomic) NSString urlType;
@property (nonatomic) NSString url;
@property (nonatomic) NSString speaker;
@property (nonatomic) NSInteger responseType;
@property (nonatomic) BOOL useVideoStatus;
@property (nonatomic) NSInteger videoStatus;
@property (nonatomic) SAMICore_AudioConfig outAudioConfig;
- (void)setVideoStatus:;
- (id)outAudioConfig;
- (void)setOutAudioConfig:;
- (void)setUseVideoStatus:;
- (BOOL)useVideoStatus;
- (int)videoStatus;
- (id)url;
- (void)dealloc;
- (void)setSpeaker:;
- (void)setUrl:;
- (id)urlType;
- (int)responseType;
- (id)speaker;
- (void)setResponseType:;
- (void)setUrlType:;
@end
