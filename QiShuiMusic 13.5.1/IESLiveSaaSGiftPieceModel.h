@interface IESLiveSaaSGiftPieceModel : BDDynamicMTLModel
@property (nonatomic) NSNumber giftID;
@property (nonatomic) IESLiveSaaSPatternModel namePattern;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)namePatternJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
