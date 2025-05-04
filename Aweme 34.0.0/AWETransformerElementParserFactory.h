@interface AWETransformerElementParserFactory : NSObject
- (id)__parseRootElementWithDictionary:globalParams:;
- (id)__mergeTemplate:withData:;
- (id)__parserElementWithTemplate:elementID:globalParams:isRootElement:cardRootElement:isCardRootElement:;
- (id)__parseElementWithDictionary:globalParams:;
- (id)__createElementWithType:;
- (id)__parserWithType:;
- (id)__mergeDictionary:another:;
+ (id)parseDSLJSONObject:globalParams:;
+ (id)parseCardDSLJSONObject:;
@end
