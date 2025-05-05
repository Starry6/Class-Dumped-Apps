@interface PRDictionary : NSObject
- (void)dealloc;
- (id)description;
- (id)initWithURL:fallbackURL:;
- (BOOL)checkWordBuffer:length:encoding:index:caseInsensitive:;
- (id)dictionaryAtIndex:;
- (id)fallbackDictionary;
- (id)parameterBundle;
- (id)transformerParameterBundle;
@end
