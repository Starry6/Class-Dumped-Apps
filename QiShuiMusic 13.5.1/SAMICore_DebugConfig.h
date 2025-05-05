@interface SAMICore_DebugConfig : NSObject
@property (nonatomic) NSString dumpPath;
@property (nonatomic) NSString fileNamePrefix;
@property (nonatomic) I sampleRate;
@property (nonatomic) I numberChannels;
- (id)dumpPath;
- (id)fileNamePrefix;
- (unsigned int)numberChannels;
- (void)setDumpPath:;
- (void)setFileNamePrefix:;
- (void)setNumberChannels:;
- (unsigned int)sampleRate;
- (void)setSampleRate:;
@end
