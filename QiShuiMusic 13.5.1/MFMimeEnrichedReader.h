@interface MFMimeEnrichedReader : NSObject
- (void)dealloc;
- (void)setWantsHTML:;
- (id)description;
- (void)mismatchError:;
- (void)appendStringToBuffer:;
- (void)resetStateWithString:outputString:;
- (void)nowWouldBeAGoodTimeToAppendToTheAttributedString;
- (void)closeUpQuoting;
- (void)handleNoParameterCommand:;
- (void)setupFontStackEntry:;
- (void)beginCommand:;
- (void)endCommand:;
- (void)parseParameterString:;
- (id)currentFont;
- (void)appendNewLine:;
- (int)readTokenInto:;
- (void)convertRichTextString:intoOutputString:;
- (void)convertEnrichedString:intoOutputString:;
+ (id)punctuationSet;
+ (id)parenSet;
@end
