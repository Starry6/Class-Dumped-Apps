@interface IESLiveSaaSPBTextPiece : GPBMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) IESLiveSaaSPBTextFormat format;
@property (nonatomic) BOOL hasFormat;
@property (nonatomic) NSString valueRef;
@property (nonatomic) NSString stringValue;
@property (nonatomic) IESLiveSaaSPBTextPieceUser userValue;
@property (nonatomic) BOOL hasUserValue;
@property (nonatomic) IESLiveSaaSPBTextPieceGift giftValue;
@property (nonatomic) BOOL hasGiftValue;
@property (nonatomic) IESLiveSaaSPBTextPieceHeart heartValue;
@property (nonatomic) BOOL hasHeartValue;
@property (nonatomic) IESLiveSaaSPBTextPiecePatternRef patternRefValue;
@property (nonatomic) BOOL hasPatternRefValue;
@property (nonatomic) IESLiveSaaSPBTextPieceImage imageValue;
@property (nonatomic) BOOL hasImageValue;
@property (nonatomic) NSString schemaKey;
+ (id)descriptor;
@end
