@interface AVAudioMix : NSObject
@property (nonatomic) NSArray inputParameters;
- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)inputParameters;
- (void)setInputParameters:;
- (id)audioMixInputParametersForTrackID:;
@end
