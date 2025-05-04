@interface AWEECShoppingAIGuideCardSettingProvider : NSObject
@property (nonatomic) NSMutableDictionary cardCache;
- (void)enqueueLynxCard:withType:;
- (id)dequeueLynxCardWithType:cardDataString:eventData:uiData:maxWidth:lynxDelegate:;
- (id)cardStackForType:;
- (id)cardCache;
- (void)preloadLynxCardsWithCount:;
- (void)setCardCache:;
- (void).cxx_destruct;
+ (unsigned long long)cardRenderType:;
+ (double)cardHeightForCardType:;
+ (id)allSliceCardSettings;
+ (id)allLynxCardSettings;
+ (id)allHybridCardSetting;
+ (id)fallbackHybridCardSetting;
+ (id)lynxCardUrlString:;
+ (id)lynxCardSettings:;
+ (id)sliceCardSettings:;
@end
