@interface OPTTSMutableTTSPhonemeSequence : OPTTSTTSPhonemeSequence
@property (nonatomic) NSArray word_phonemes;
- (id)init;
- (id)copyWithZone:;
- (id)word_phonemes;
- (void)setWord_phonemes:;
@end
