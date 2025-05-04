@interface AWEHotSpotLynxBarPreloadManager : NSObject
@property (nonatomic) NSMutableDictionary preRenderedContextDict;
- (BOOL)hasHotSpotInfoWithModel:;
- (id)preRenderedContextDict;
- (id)getRenderedContextForHotSpotID:;
- (void)preloadHotSpotLynxBarForAwemeList:;
- (BOOL)isLoadedWithModel:;
- (void)setPreRenderedContextDict:;
- (id)init;
- (void).cxx_destruct;
- (void)cleanCache;
+ (id)hotSpotBottomBarRawDataWithModel:;
+ (BOOL)checkDowngradeHotSpotUseNativeBar;
+ (BOOL)canUseLynxBarWithModel:;
+ (id)sharedManager;
@end
