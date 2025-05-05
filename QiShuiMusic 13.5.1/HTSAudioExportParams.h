@interface HTSAudioExportParams : IESMMObject
@property (nonatomic) NSString fileType;
@property (nonatomic) I formatID;
@property (nonatomic) q bitRate;
@property (nonatomic) q channels;
@property (nonatomic) q sampleRate;
- (long long)channels;
- (id)init;
- (long long)sampleRate;
- (void)setFileType:;
- (id)fileType;
- (void).cxx_destruct;
- (void)setChannels:;
- (long long)bitRate;
- (void)setSampleRate:;
- (unsigned int)formatID;
- (void)setFormatID:;
- (void)setBitRate:;
@end
