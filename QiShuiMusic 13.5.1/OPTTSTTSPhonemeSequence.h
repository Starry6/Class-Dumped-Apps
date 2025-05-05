@interface OPTTSTTSPhonemeSequence : NSObject
@property (nonatomic) NSArray word_phonemes;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)word_phonemes;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
- (id)word_phonemes_objectAtIndex:;
- (unsigned long long)word_phonemes_count;
- (void)word_phonemes_enumerateObjectsUsingBlock:;
@end
