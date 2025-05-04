@interface AWESearchCachalotCardPipeline : NSObject
@property (nonatomic) NSMutableDictionary dataMap;
@property (nonatomic) NSMutableDictionary viewMap;
@property (nonatomic) CachalotContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)renderType;
- (id)transformBusinessDataItem:ofDataType:;
- (id)transformRenderInfoItem:;
- (void)updateComponentView:withViewModel:;
- (id)componentViewWithViewModel:;
- (id)componentViewSizeWithViewModel:containerWidth:;
- (id)reuseIdentifierWithViewModel:;
- (id)generateComponentContextWithComponentViewModel:;
- (id)dataMap;
- (void)setDataMap:;
- (void)registerDataType:dataClass:;
- (void)registerViewType:viewClass:;
- (void)setViewMap:;
- (id)init;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)viewMap;
+ (id)defaultPipeline;
@end
