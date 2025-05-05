@interface IMFromSuperParserContext : IMAttributedStringParserContext
@property (nonatomic) NSArray inlinedFileTransferGUIDs;
@property (nonatomic) NSArray standaloneFileTransferGUIDs;
@property (nonatomic) BOOL foundBreadcrumbText;
- (void)dealloc;
- (id)initWithAttributedString:;
- (id)name;
- (id)resultsForLogging;
- (void)parser:foundAttributes:inRange:characters:;
- (void)parserDidStart:;
- (void)parser:foundAttributes:inRange:;
- (void)parserDidStart:bodyAttributes:;
- (void)parser:foundAttributes:inRange:fileTransferGUID:filename:bookmark:width:height:;
- (void)parser:foundAttributes:inRange:fileTransferGUID:filename:bookmark:width:height:emoji:;
- (void)parser:foundBreadcrumbText:withOptions:;
- (id)inlinedFileTransferGUIDs;
- (id)standaloneFileTransferGUIDs;
- (BOOL)foundBreadcrumbText;
@end
