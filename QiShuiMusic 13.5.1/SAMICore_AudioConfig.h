@interface SAMICore_AudioConfig : NSObject
@property (nonatomic) r* format;
@property (nonatomic) NSInteger sampleRate;
@property (nonatomic) NSInteger channel;
- (void)setFormat:;
- (void)setChannel:;
- (int)channel;
- (id)format;
- (int)sampleRate;
- (void)setSampleRate:;
@end
