@interface SNAudioQualityModelInput : NSObject
@property (nonatomic) MLMultiArray audioSamples;
@property (nonatomic) NSSet featureNames;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)initWithAudioSamples:;
- (id)audioSamples;
- (void)setAudioSamples:;
@end
