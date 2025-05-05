@interface SAMICore_AudioBlock : NSObject
@property (nonatomic) q dataType;
@property (nonatomic) I numberAudioData;
@property (nonatomic) @ audioData;
- (unsigned int)numberAudioData;
- (void)setNumberAudioData:;
- (void)setDataType:;
- (void)dealloc;
- (long long)dataType;
- (id)audioData;
- (void)setAudioData:;
@end
