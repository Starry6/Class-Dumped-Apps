@interface VCMediaControlInfoFaceTimeVideo : VCMediaControlInfo
- (id)description;
- (unsigned long long)serializedSize;
- (int)configureWithBuffer:length:optionalControlInfo:;
- (int)setInfo:size:type:;
- (BOOL)hasInfoType:;
- (int)getInfo:bufferLength:infoSize:type:;
- (int)serializeToBuffer:bufferLength:blobLength:;
- (int)handleOptionalControlInfo:;
@end
