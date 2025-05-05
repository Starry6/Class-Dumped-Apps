@interface AVAudioUnitSampler : AVAudioUnitMIDIInstrument
@property (nonatomic) float stereoPan;
@property (nonatomic) float overallGain;
@property (nonatomic) float masterGain;
@property (nonatomic) float globalTuning;
- (id)init;
- (id)initWithAudioComponentDescription:;
- (BOOL)loadInstrumentAtURL:error:;
- (BOOL)loadSoundBankInstrumentAtURL:program:bankMSB:bankLSB:error:;
- (BOOL)loadAudioFilesAtURLs:error:;
- (float)stereoPan;
- (float)overallGain;
- (float)masterGain;
- (float)globalTuning;
- (void)setStereoPan:;
- (void)setOverallGain:;
- (void)setMasterGain:;
- (void)setGlobalTuning:;
@end
