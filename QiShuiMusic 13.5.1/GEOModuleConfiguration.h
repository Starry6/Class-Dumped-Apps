@interface GEOModuleConfiguration : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic) GEOPlaceRibbonConfiguration placeRibbonConfig;
@property (nonatomic) GEORelatedPlaceModuleConfiguration relatedPlaceConfig;
@property (nonatomic) GEOWebContentModuleConfiguration webContentConfig;
@property (nonatomic) GEOButtonModuleConfiguration actionButtonConfig;
@property (nonatomic) GEOHeaderButtonModuleConfiguration headerButtonConfig;
@property (nonatomic) GEOPlaceDetailsModuleConfiguration placeDetailsConfig;
@property (nonatomic) GEOBusinessInfoModuleConfiguration businessInfoConfig;
@property (nonatomic) GEOUnifiedActionButtonModuleConfiguration unifiedActionConfig;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithModuleConfiguration:;
- (id)webContentConfig;
- (id)relatedPlaceConfig;
- (id)placeRibbonConfig;
- (id)actionButtonConfig;
- (id)headerButtonConfig;
- (id)businessInfoConfig;
- (id)placeDetailsConfig;
- (id)unifiedActionConfig;
- (void)_logNoModuleConfigMatchForType;
+ (id)moduleConfigurationForURL:;
@end
