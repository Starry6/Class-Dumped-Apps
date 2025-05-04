@interface AWEUndertakeFeedWidgetStrategy : AWEUndertakeBaseStrategy
@property (nonatomic) MMKV mmkv;
@property (nonatomic) NSArray hasShownGuideDate;
- (void)setMmkv:;
- (id)mmkv;
- (void)getCurrentFeedAweModel;
- (id)aAWEUGAddWidgetGuideManagerCommonAdapter;
- (void)injectConditions;
- (void)checkAllConditionsWithSkip:;
- (BOOL)needUndertakeOnThisLaunch;
- (void)performUndertake;
- (id)hasShownGuideDate;
- (void)setHasShownGuideDate:;
- (id)init;
- (void).cxx_destruct;
+ (Class)aAWEUGAddWidgetGuideManagerCommonAdapterClass;
+ (id)sharedInstance;
@end
