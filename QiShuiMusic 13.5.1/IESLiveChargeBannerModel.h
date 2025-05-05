@interface IESLiveChargeBannerModel : IESLiveDynamicMTLModel
@property (nonatomic) IESLiveFlexImage bgImg;
@property (nonatomic) NSString actionScheme;
@property (nonatomic) NSNumber source;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)bgImgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
