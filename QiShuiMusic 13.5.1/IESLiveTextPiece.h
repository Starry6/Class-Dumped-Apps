@interface IESLiveTextPiece : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) NSInteger alignment;
@property (nonatomic) IESLiveTextPieceString stringValue;
@property (nonatomic) BOOL hasStringValue;
@property (nonatomic) IESLiveTextPieceImage imageValue;
@property (nonatomic) BOOL hasImageValue;
+ (id)descriptor;
@end
