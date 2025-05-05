@interface IMAttributedStringParserContext : NSObject
@property (nonatomic) NSAttributedString inString;
@property (nonatomic) NSString name;
@property (nonatomic) NSArray resultsForLogging;
@property (nonatomic) BOOL shouldPreprocess;
- (void)dealloc;
- (id)initWithAttributedString:;
- (id)name;
- (id)resultsForLogging;
- (void)parserDidStart:;
- (void)parser:foundAttributes:inRange:;
- (void)parserDidEnd:;
- (BOOL)shouldPreprocess;
- (id)parser:preprocessedAttributesForAttributes:range:;
- (id)inString;
@end
