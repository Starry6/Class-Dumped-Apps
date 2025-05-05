@interface IMSuperToSuperSanitizerContext : IMFromSuperParserContext
@property (nonatomic) NSAttributedString sanitizedContent;
@property (nonatomic) NSArray attachments;
- (void)dealloc;
- (id)name;
- (id)attachments;
- (id)resultsForLogging;
- (void)parser:foundAttributes:inRange:characters:;
- (void)parserDidStart:bodyAttributes:;
- (void)parser:foundAttributes:inRange:fileTransferGUID:filename:bookmark:width:height:emoji:;
- (void)parserDidEnd:;
- (id)initWithAttributedString:extractAttachments:;
- (id)sanitizedContent;
@end
