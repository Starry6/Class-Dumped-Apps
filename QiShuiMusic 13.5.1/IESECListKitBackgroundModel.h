@interface IESECListKitBackgroundModel : MTLModel
@property (nonatomic) IESECListKitBackgroundPromoModel light;
@property (nonatomic) IESECListKitBackgroundPromoModel dark;
@property (nonatomic) NSDictionary extraData;
@property (nonatomic) BOOL disableDarkmodeGradientSwitch;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)disableDarkmodeGradientSwitch;
- (void)setDisableDarkmodeGradientSwitch:;
- (void).cxx_destruct;
- (void)setExtraData:;
- (id)extraData;
- (id)light;
- (id)dark;
- (void)setDark:;
- (void)setLight:;
+ (id)extraDataJSONTransformer;
+ (id)promoDarkJSONTransformer;
+ (id)promoLightJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
