@interface IESLiveSaaSTemplateParser : NSObject
@property (nonatomic) IESLiveSaaSPieceParser pieceParser;
@property (nonatomic) IESLiveSaaSRichTextPieceParser richTextPieceParser;
- (void)setPieceParser:;
- (id)initWithDIContext:;
- (id)parseDisplayText:templateString:configuration:;
- (id)parseEnableSchemaInfoDisplayText:templateString:configuration:;
- (id)parsePiecesFromDisplayText:templateString:configuration:;
- (id)parseTemplate:;
- (id)pieceParser;
- (id)richTextPieceParser;
- (void)setRichTextPieceParser:;
- (void).cxx_destruct;
@end
