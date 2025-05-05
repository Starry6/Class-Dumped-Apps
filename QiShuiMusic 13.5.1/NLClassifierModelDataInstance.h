@interface NLClassifierModelDataInstance : NLDataInstance
- (id)string;
- (id)label;
- (id)labels;
- (void).cxx_destruct;
- (id)tokens;
- (id)initWithString:label:;
- (id)initWithLine:tokenizer:;
- (id)formattedLineWithLabelMap:vocabularyMap:;
- (id)instanceDictionary;
- (id)locatorsWithIndex:parameters:tagger:tokenizer:;
- (id)subInstanceWithLocator:tokenizer:;
- (id)initWithString:label:tokenizer:;
+ (id)readInstancesFromString:tokenizer:;
@end
