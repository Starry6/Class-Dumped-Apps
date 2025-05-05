@interface SAMICore_VopAudioCheckerConfig : NSObject
@property (nonatomic) NSInteger sampleRate;
@property (nonatomic) NSInteger sampleBit;
@property (nonatomic) NSInteger channel;
@property (nonatomic) NSInteger maxBlockSize;
- (int)maxBlockSize;
- (int)sampleBit;
- (void)setMaxBlockSize:;
- (void)setSampleBit:;
- (void)setChannel:;
- (void)dealloc;
- (int)channel;
- (int)sampleRate;
- (void)setSampleRate:;
@end
