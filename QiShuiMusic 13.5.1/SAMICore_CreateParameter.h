@interface SAMICore_CreateParameter : NSObject
@property (nonatomic) NSInteger sampleRate;
@property (nonatomic) NSInteger maxBlockSize;
@property (nonatomic) * modelBuffer;
@property (nonatomic) NSInteger modelLen;
@property (nonatomic) NSInteger numChannel;
@property (nonatomic) NSInteger numAudioBuffer;
@property (nonatomic) * jsonConfig;
@property (nonatomic) r* bussinessInfo;
@property (nonatomic) r* configInfo;
- (void)setModelBuffer:;
- (id)bussinessInfo;
- (char *)jsonConfig;
- (int)maxBlockSize;
- (char *)modelBuffer;
- (int)modelLen;
- (int)numAudioBuffer;
- (int)numChannel;
- (void)setBussinessInfo:;
- (void)setJsonConfig:;
- (void)setMaxBlockSize:;
- (void)setModelLen:;
- (void)setNumAudioBuffer:;
- (void)setNumChannel:;
- (int)sampleRate;
- (void)setSampleRate:;
- (id)configInfo;
- (void)setConfigInfo:;
@end
