@interface AWELiveLocalLifeAtmosphereModel : MTLModel
@property (nonatomic) Q atmosphereType;
@property (nonatomic) NSNumber atmosphereNum;
@property (nonatomic) NSString atmosphereText;
@property (nonatomic) AWELiveLocalLifeAtmosphereIcon atmosphereIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)atmosphereType;
- (id)atmosphereNum;
- (id)atmosphereText;
- (void)setAtmosphereType:;
- (void)setAtmosphereNum:;
- (void)setAtmosphereText:;
- (id)atmosphereIcon;
- (void)setAtmosphereIcon:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
