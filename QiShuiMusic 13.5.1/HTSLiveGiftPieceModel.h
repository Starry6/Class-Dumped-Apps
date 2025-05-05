@interface HTSLiveGiftPieceModel : IESLiveDynamicMTLModel
@property (nonatomic) NSNumber giftID;
@property (nonatomic) HTSLivePatternModel namePattern;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)namePatternJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
