@interface MFMessageBodySubparser : MFMessageBodyParserObject
- (void)messageBodyParser:foundMessageBodyElement:;
- (void)messageBodyParserDidFinishParsing:;
@end
