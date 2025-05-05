@interface IESLiveSaaSBattleRivalTag : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSImage backgroundImage;
@property (nonatomic) IESLiveSaaSImage iconImage;
@property (nonatomic) NSString content;
@property (nonatomic) NSString fontColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)backgroundImageJSONTransformer;
+ (id)iconImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
