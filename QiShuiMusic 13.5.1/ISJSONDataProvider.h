@interface ISJSONDataProvider : ISDataProvider
@property (nonatomic) Q parserOptions;
- (id)init;
- (BOOL)parseData:returningError:;
- (unsigned long long)parserOptions;
- (void)setParserOptions:;
@end
