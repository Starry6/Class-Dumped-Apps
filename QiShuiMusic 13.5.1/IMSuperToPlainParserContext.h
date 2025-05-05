@interface IMSuperToPlainParserContext : IMFromSuperParserContext
@property (nonatomic) NSString plainString;
@property (nonatomic) NSMutableString mutablePlainString;
- (void)dealloc;
- (id)initWithAttributedString:;
- (id)name;
- (id)initWithAttributedString:extractLinks:;
- (id)resultsForLogging;
- (id)plainString;
- (void)parser:foundAttributes:inRange:characters:;
- (id)mutablePlainString;
@end
