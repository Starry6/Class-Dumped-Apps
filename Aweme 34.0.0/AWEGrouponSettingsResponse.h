@interface AWEGrouponSettingsResponse : AWEBaseApiModel
@property (nonatomic) double serverTimeStamp;
@property (nonatomic) NSString skyLightCapsuleTitle;
@property (nonatomic) NSArray preloadTimors;
@property (nonatomic) NSArray transformersCardList;
@property (nonatomic) NSString topContainerData;
@property (nonatomic) NSString transformerGlobalConfig;
@property (nonatomic) BOOL shouldFoldTransformer;
@property (nonatomic) AWEURLModel bgURLModle;
@property (nonatomic) AWEURLModel bgLightUrl;
@property (nonatomic) AWEGrouponActivityBgModel activityBg;
@property (nonatomic) NSString bgTextColor;
@property (nonatomic) NSString bgTextColorLight;
@property (nonatomic) q sceneType;
@property (nonatomic) NSString serverLatency;
@property (nonatomic) AWEGrouponActivityModel activityModel;
@property (nonatomic) AWEGrouponWidgetModel widgetModel;
@property (nonatomic) AWEGrouponAsyncExposeCardModel asyncExposeCardConfig;
@property (nonatomic) NSString currentLocationCity;
@property (nonatomic) NSMutableDictionary lifeServiceDiffHeightDictionary;
@property (nonatomic) NSString transformerDSLString;
@property (nonatomic) AWEGrouponSettingsControlInfo controlInfo;
@property (nonatomic) NSString transformerCardDSLString;
@property (nonatomic) BOOL canShowFeedGuide;
@property (nonatomic) BOOL hasLifeServiceEntrance;
@property (nonatomic) BOOL isRequestFeedGuide;
@property (nonatomic) BOOL isTransformerUnderTake;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) Q pullType;
@property (nonatomic) q transformerTheme;
@property (nonatomic) q displayTransformerTheme;
@property (nonatomic) NSString extraInfo;
@property (nonatomic) Q rowType;
@property (nonatomic) q pageType;
@property (nonatomic) Q settingDataFrom;
@property (nonatomic) Q dataType;
@property (nonatomic) q cacheStrategy;
@property (nonatomic) NSDictionary dualSearchBarSetting;
@property (nonatomic) NSString geckoConfigString;
@property (nonatomic) NSArray geckoConfig;
@property (nonatomic) NSDictionary lifeServiceDiffHeightDictionaryBackUp;
- (id)trackParams;
- (unsigned long long)pullType;
- (void)setTrackParams:;
- (void)setPullType:;
- (id)controlInfo;
- (void)setControlInfo:;
- (id)activityModel;
- (id)dualSearchBarSetting;
- (id)geckoConfigString;
- (unsigned long long)settingDataFrom;
- (void)setSettingDataFrom:;
- (BOOL)hasHalfScreenData;
- (long long)displayTransformerTheme;
- (id)bgTextColor;
- (id)bgTextColorLight;
- (id)currentLocationCity;
- (id)topContainerData;
- (void)setTopContainerData:;
- (void)setCurrentLocationCity:;
- (void)setDualSearchBarSetting:;
- (id)widgetModel;
- (void)setWidgetModel:;
- (id)transformerDSLTemplate;
- (void)tranformDSLToElement;
- (id)transformerGlobalConfig;
- (void)setGeckoConfigString:;
- (id)geckoConfig;
- (void)setGeckoConfig:;
- (id)activityBg;
- (void)setActivityBg:;
- (void)setDisplayTransformerTheme:;
- (void)setBgTextColor:;
- (void)setBgTextColorLight:;
- (id)transformerDSLString;
- (id)transformerCardDSLString;
- (id)cardInitDataInDictionary:;
- (id)skyLightCapsuleTitle;
- (void)setSkyLightCapsuleTitle:;
- (BOOL)shouldFoldTransformer;
- (void)setShouldFoldTransformer:;
- (id)bgURLModle;
- (void)setBgURLModle:;
- (void)setTransformerDSLString:;
- (BOOL)canShowFeedGuide;
- (void)setCanShowFeedGuide:;
- (BOOL)hasLifeServiceEntrance;
- (void)setHasLifeServiceEntrance:;
- (id)bgLightUrl;
- (void)setBgLightUrl:;
- (id)lifeServiceDiffHeightDictionaryBackUp;
- (void)setLifeServiceDiffHeightDictionaryBackUp:;
- (void)setTransformerGlobalConfig:;
- (id)transformerCardInitData;
- (id)copyToDiskResponse;
- (BOOL)onlyHasTargetCards:;
- (BOOL)hasExposeCard;
- (BOOL)isLifeEntrancePageEnable;
- (BOOL)hasHalfScreenDataWithCardInitData:;
- (BOOL)hasExposeDataWithCardInitData:;
- (double)serverTimeStamp;
- (void)setServerTimeStamp:;
- (id)preloadTimors;
- (void)setPreloadTimors:;
- (id)transformersCardList;
- (void)setTransformersCardList:;
- (id)asyncExposeCardConfig;
- (void)setAsyncExposeCardConfig:;
- (id)lifeServiceDiffHeightDictionary;
- (void)setLifeServiceDiffHeightDictionary:;
- (void)setTransformerCardDSLString:;
- (BOOL)isRequestFeedGuide;
- (void)setIsRequestFeedGuide:;
- (BOOL)isTransformerUnderTake;
- (void)setIsTransformerUnderTake:;
- (long long)transformerTheme;
- (void)setTransformerTheme:;
- (void)setDataType:;
- (void)setPageType:;
- (void).cxx_destruct;
- (unsigned long long)dataType;
- (long long)pageType;
- (long long)sceneType;
- (void)setSceneType:;
- (unsigned long long)rowType;
- (void)setRowType:;
- (id)serverLatency;
- (void)setServerLatency:;
- (long long)cacheStrategy;
- (void)setCacheStrategy:;
- (id)extraInfo;
- (void)setExtraInfo:;
+ (id)asyncExposeCardConfigJSONTransformer;
+ (id)transformersCardListJSONTransformer;
+ (id)widgetModelJSONTransformer;
+ (id)activityBgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
