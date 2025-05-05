@interface OPTTSTTSNeuralPhonemeSequence : NSObject
@property (nonatomic) NSArray phonemes;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)phonemes;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
- (id)phonemes_objectAtIndex:;
- (unsigned long long)phonemes_count;
- (void)phonemes_enumerateObjectsUsingBlock:;
@end
