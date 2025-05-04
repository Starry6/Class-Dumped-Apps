@interface AWESearchCachalotWebPipeline : NSObject
@property (nonatomic) AWESearchCachalotWebConfig webConfig;
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
- (id)webConfig;
- (void)setWebConfig:;
- (id)initWithCustomWebConfig:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
