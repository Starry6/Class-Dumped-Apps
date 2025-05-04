@interface AWEInteractionStickerLocationBackUpModel : MTLModel
@property (nonatomic) NSDecimalNumber xForRecover;
@property (nonatomic) NSDecimalNumber yForRecover;
@property (nonatomic) NSDecimalNumber widthForRecover;
@property (nonatomic) NSDecimalNumber heightForRecover;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)validNumber:;
- (id)xForRecover;
- (void)setXForRecover:;
- (id)yForRecover;
- (void)setYForRecover:;
- (id)widthForRecover;
- (void)setWidthForRecover:;
- (id)heightForRecover;
- (void)setHeightForRecover:;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (id)transformerForDecimalNumber;
+ (id)xForRecoverJSONTransformer;
+ (id)yForRecoverJSONTransformer;
+ (id)widthForRecoverJSONTransformer;
+ (id)heightForRecoverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
