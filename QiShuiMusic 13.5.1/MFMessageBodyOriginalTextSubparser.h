@interface MFMessageBodyOriginalTextSubparser : MFMessageBodySubparser
- (void)dealloc;
- (void)copyBlocks;
- (void)setFoundTextBlock:;
- (void)setFoundWhitespaceBlock:;
- (void)_consumeTextElement:isAttribution:;
- (void)_consumeAnyLastTextElementAsAttribution:;
- (void)messageBodyParser:foundMessageBodyElement:;
- (void)messageBodyParserDidFinishParsing:;
@end
