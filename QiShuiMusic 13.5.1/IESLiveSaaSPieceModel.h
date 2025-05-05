@interface IESLiveSaaSPieceModel : BDDynamicMTLModel
@property (nonatomic) NSNumber type;
@property (nonatomic) IESLiveSaaSTextFormatModel format;
@property (nonatomic) NSString stringValue;
@property (nonatomic) IESLiveSaaSHeartPieceModel heartValue;
@property (nonatomic) IESLiveSaaSGiftPieceModel giftValue;
@property (nonatomic) IESLiveSaaSUserPieceModel userValue;
@property (nonatomic) IESLiveSaaSImagePieceModel imageValue;
@property (nonatomic) IESLiveSaaSPatternPieceModel patternValue;
@property (nonatomic) NSString schemaKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)schemaKey;
- (void)setSchemaKey:;
- (void).cxx_destruct;
+ (id)formatJSONTransformer;
+ (id)giftValueJSONTransformer;
+ (id)heartValueJSONTransformer;
+ (id)imageValueJSONTransformer;
+ (id)patternValueJSONTransformer;
+ (id)userValueJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
