@interface VCMediaControlInfoFaceTimeAudio : VCMediaControlInfo
@property (nonatomic) Q feedbackSize;
@property (nonatomic) BOOL videoEnabled;
- (id)description;
- (void)setVideoEnabled:;
- (BOOL)videoEnabled;
- (unsigned long long)serializedSize;
- (unsigned long long)feedbackSize;
- (int)configureWithBuffer:length:optionalControlInfo:;
- (int)setInfo:size:type:;
- (int)setInfoUnserialized:type:;
- (BOOL)hasInfoType:;
- (int)getInfo:bufferLength:infoSize:type:;
- (int)getInfoUnserialized:type:;
- (int)serializeToBuffer:bufferLength:blobLength:;
- (int)handleOptionalControlInfo:;
@end
