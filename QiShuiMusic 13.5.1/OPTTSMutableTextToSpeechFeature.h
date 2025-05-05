@interface OPTTSMutableTextToSpeechFeature : OPTTSTextToSpeechFeature
@property (nonatomic) NSArray normalized_text;
@property (nonatomic) NSArray phoneme_sequence;
@property (nonatomic) NSArray prompts;
@property (nonatomic) NSArray replacement;
@property (nonatomic) NSArray neural_phoneme_sequence;
- (id)init;
- (id)copyWithZone:;
- (id)replacement;
- (id)prompts;
- (void)setPrompts:;
- (void)setReplacement:;
- (id)normalized_text;
- (void)setNormalized_text:;
- (id)phoneme_sequence;
- (void)setPhoneme_sequence:;
- (id)neural_phoneme_sequence;
- (void)setNeural_phoneme_sequence:;
@end
