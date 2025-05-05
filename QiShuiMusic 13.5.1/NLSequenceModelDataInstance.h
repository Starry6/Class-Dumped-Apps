@interface NLSequenceModelDataInstance : NLDataInstance
- (id)string;
- (id)label;
- (id)labels;
- (void).cxx_destruct;
- (id)tokens;
- (id)initWithLine:tokenizer:;
- (id)formattedLineWithLabelMap:vocabularyMap:;
- (id)instanceDictionary;
- (id)locatorsWithIndex:parameters:tagger:tokenizer:;
- (id)subInstanceWithLocator:tokenizer:;
- (id)initWithTokens:labels:;
+ (id)readInstancesFromString:tokenizer:;
@end
