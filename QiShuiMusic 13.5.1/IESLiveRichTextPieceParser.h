@interface IESLiveRichTextPieceParser : NSObject
@property (nonatomic) HTSLivePieceParser pieceParser;
- (id)handleHeartPiece:configuration:;
- (void)setPieceParser:;
- (id)handleGiftPiece:defaultFormat:configuration:;
- (id)handleImagePiece:defaultFormat:configuration:;
- (id)handlePatternPiece:defaultFormat:configuration:;
- (id)handleStringPiece:defaultFormat:configuration:;
- (id)handleUserPiece:defaultFormat:configuration:;
- (id)initWithDIContext:;
- (id)pieceParser;
- (id)init;
- (void).cxx_destruct;
@end
