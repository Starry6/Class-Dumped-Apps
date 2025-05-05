@interface CRCHPatternNetwork : NSObject
- (void)dealloc;
- (id)initWithFile:;
- (id)advanceCursor:withSymbol:;
+ (id)patternToSymbolMap;
+ (id)kDefaultPatternsPlusUrlsAndEmails;
+ (id)kDefaultPatterns;
+ (id)kEmailPatterns;
+ (id)kUrlPatterns;
+ (id)rootCursorForContentType:inNetwork:;
+ (id)cursorByAdvancingWithString:fromCursor:inNetwork:;
+ (id)cursorByAdvancingWithSymbol:fromCursor:inNetwork:;
+ (BOOL)isFinalCursor:inNetwork:;
@end
