@interface OPTTSMutableTTSWordPhonemes : OPTTSTTSWordPhonemes
@property (nonatomic) NSArray phonemes;
- (id)init;
- (id)copyWithZone:;
- (id)phonemes;
- (void)setPhonemes:;
@end
