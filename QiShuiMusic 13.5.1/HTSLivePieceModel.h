@interface HTSLivePieceModel : IESLiveDynamicMTLModel
@property (nonatomic) NSNumber type;
@property (nonatomic) HTSLiveTextFormatModel format;
@property (nonatomic) NSString stringValue;
@property (nonatomic) HTSLiveHeartPieceModel heartValue;
@property (nonatomic) HTSLiveGiftPieceModel giftValue;
@property (nonatomic) HTSLiveUserPieceModel userValue;
@property (nonatomic) HTSLiveImagePieceModel imageValue;
@property (nonatomic) HTSLivePatternPieceModel patternValue;
@property (nonatomic) NSString schemaKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)formatJSONTransformer;
+ (id)giftValueJSONTransformer;
+ (id)heartValueJSONTransformer;
+ (id)imageValueJSONTransformer;
+ (id)patternValueJSONTransformer;
+ (id)userValueJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
