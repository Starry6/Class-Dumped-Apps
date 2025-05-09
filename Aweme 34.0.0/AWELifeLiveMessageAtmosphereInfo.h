@interface AWELifeLiveMessageAtmosphereInfo : MTLModel
@property (nonatomic) NSNumber atmosphereType;
@property (nonatomic) NSNumber atmosphereNum;
@property (nonatomic) NSString atmosphereText;
@property (nonatomic) NSString componentId;
@property (nonatomic) NSString cardId;
@property (nonatomic) NSArray availableAb;
@property (nonatomic) AWELifeLiveMessageAtmosphereImageInfo imageInfo;
@property (nonatomic) BOOL needDelete;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)atmosphereType;
- (id)availableAb;
- (id)atmosphereNum;
- (id)atmosphereText;
- (BOOL)needDelete;
- (void)setAtmosphereType:;
- (void)setAtmosphereNum:;
- (void)setAtmosphereText:;
- (void)setAvailableAb:;
- (void)setNeedDelete:;
- (void).cxx_destruct;
- (id)cardId;
- (id)imageInfo;
- (void)setImageInfo:;
- (void)setCardId:;
- (void)setComponentId:;
- (id)componentId;
+ (id)JSONKeyPathsByPropertyKey;
@end
