@interface HTSLiveTemplateParser : NSObject
@property (nonatomic) HTSLivePieceParser pieceParser;
@property (nonatomic) IESLiveRichTextPieceParser richTextPieceParser;
- (void)setPieceParser:;
- (id)initWithDIContext:;
- (id)parseCombinedText:configuration:;
- (id)parseDisplayText:templateString:configuration:;
- (id)parseEnableSchemaInfoDisplayText:templateString:configuration:;
- (id)parsePiecesFromDisplayText:templateString:configuration:;
- (id)pieceParser;
- (id)richTextPieceParser;
- (void)setRichTextPieceParser:;
- (id)stackImageItem:overlapSpace:;
- (void).cxx_destruct;
+ (id)parseTemplate:;
@end
