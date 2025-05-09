@interface AVAudioSettingsValueConstrainer : NSObject
@property (nonatomic) float outputSampleRate;
@property (nonatomic) I outputFormat;
@property (nonatomic) I outputFormatFlags;
@property (nonatomic) I outputBitsPerChannel;
@property (nonatomic) I outputChannelCount;
@property (nonatomic) I outputDataRate;
- (unsigned int)outputFormat;
- (void)setOutputFormat:;
- (id)init;
- (void)setOutputDataRate:;
- (void)dealloc;
- (void)_bringUpToDate;
- (void)setOutputBitsPerChannel:;
- (void)setOutputFormatFlags:;
- (void)setInputPropertiesFromASBD:;
- (unsigned int)outputChannelCount;
- (unsigned int)availableOutputChannelCountForDesiredChannelCount:rounding:;
- (unsigned int)outputFormatFlags;
- (void)_buildApplicableDataRatesForSampleRates;
- (float)_getAvailableOutputSampleRateFor:rounding:;
- (float)applicableOutputSampleRateForDesiredSampleRate:rounding:;
- (void)_buildAvailableSampleRates;
- (unsigned int)outputBitsPerChannel;
- (void)_buildAudioConverter;
- (unsigned int)outputDataRate;
- (float)outputSampleRate;
- (void)setOutputChannelCount:;
- (id)_fetchApplicableOutputDataRates;
- (void)setOutputSampleRate:;
@end
