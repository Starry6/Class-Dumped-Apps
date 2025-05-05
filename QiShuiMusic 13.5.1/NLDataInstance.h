@interface NLDataInstance : NSObject
@property (nonatomic) NSString string;
@property (nonatomic) NSString label;
@property (nonatomic) NSArray tokens;
@property (nonatomic) NSArray labels;
- (id)string;
- (id)label;
- (id)labels;
- (id)tokens;
- (id)initWithString:label:;
- (id)initWithLine:tokenizer:;
- (id)formattedLineWithLabelMap:vocabularyMap:;
- (id)instanceDictionary;
- (id)locatorsWithIndex:parameters:tagger:tokenizer:;
- (id)subInstanceWithLocator:tokenizer:;
@end
