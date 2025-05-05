@interface SAMICore_SpeechToSongContextCreateParameter : SAMICore_ServerContextCreateParameter
@property (nonatomic) r* audioUrl;
@property (nonatomic) r* audioUrlType;
@property (nonatomic) r* authPolicyHeader;
@property (nonatomic) NSInteger responseType;
@property (nonatomic) NSInteger videoStatus;
@property (nonatomic) r* extra;
- (void)setVideoStatus:;
- (id)audioUrl;
- (id)audioUrlType;
- (id)authPolicyHeader;
- (void)setAudioUrl:;
- (void)setAudioUrlType:;
- (void)setAuthPolicyHeader:;
- (void)setExtra:;
- (int)videoStatus;
- (id)extra;
- (int)responseType;
- (void)setResponseType:;
@end
