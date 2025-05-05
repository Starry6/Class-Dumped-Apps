@interface HTSLiveTextPiece : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) HTSLiveTextFormat format;
@property (nonatomic) BOOL hasFormat;
@property (nonatomic) NSString valueRef;
@property (nonatomic) NSString stringValue;
@property (nonatomic) HTSLiveTextPieceUser userValue;
@property (nonatomic) BOOL hasUserValue;
@property (nonatomic) HTSLiveTextPieceGift giftValue;
@property (nonatomic) BOOL hasGiftValue;
@property (nonatomic) HTSLiveTextPieceHeart heartValue;
@property (nonatomic) BOOL hasHeartValue;
@property (nonatomic) HTSLiveTextPiecePatternRef patternRefValue;
@property (nonatomic) BOOL hasPatternRefValue;
@property (nonatomic) HTSLiveTextPieceImage imageValue;
@property (nonatomic) BOOL hasImageValue;
@property (nonatomic) NSString schemaKey;
+ (id)descriptor;
@end
