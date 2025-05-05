@interface IESLiveSaaSVSItemBar : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSImage iconDark;
@property (nonatomic) IESLiveSaaSImage iconLight;
@property (nonatomic) NSString title;
@property (nonatomic) NSString seperator;
@property (nonatomic) NSString detail;
@property (nonatomic) q watchInfoPv;
@property (nonatomic) NSString watchInfoHeat;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)iconDarkJSONTransformer;
+ (id)iconLightJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
