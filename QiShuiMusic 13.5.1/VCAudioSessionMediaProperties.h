@interface VCAudioSessionMediaProperties : NSObject
@property (nonatomic) double preferredSampleRate;
@property (nonatomic) double preferredBlockSize;
@property (nonatomic) NSInteger operatingMode;
@property (nonatomic) I vpOperatingMode;
@property (nonatomic) {AudioStreamBasicDescription=dIIIIIIII} inputFormat;
@property (nonatomic) {AudioStreamBasicDescription=dIIIIIIII} outputFormat;
@property (nonatomic) NSInteger processId;
@property (nonatomic) BOOL sessionActive;
- (id)outputFormat;
- (BOOL)isSessionActive;
- (void)setOutputFormat:;
- (int)processId;
- (void)setProcessId:;
- (id)description;
- (BOOL)isEqual:;
- (int)operatingMode;
- (void)setOperatingMode:;
- (id)inputFormat;
- (double)preferredSampleRate;
- (void)setInputFormat:;
- (unsigned int)vpOperatingMode;
- (void)setVpOperatingMode:;
- (double)preferredBlockSize;
- (void)setPreferredBlockSize:;
- (void)setPreferredSampleRate:;
- (void)setSessionActive:;
@end
