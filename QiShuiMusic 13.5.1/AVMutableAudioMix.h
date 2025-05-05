@interface AVMutableAudioMix : AVAudioMix
@property (nonatomic) NSArray inputParameters;
- (id)inputParameters;
- (void)setInputParameters:;
+ (id)audioMix;
@end
