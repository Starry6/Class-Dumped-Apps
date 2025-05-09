@interface AWEMVLandingStrategy : NSObject
@property (nonatomic) BOOL shouldDisableFirstRenderCache;
@property (nonatomic) Q refreshMode;
@property (nonatomic) BOOL forceRefresh;
@property (nonatomic) @? provideDataBlock;
@property (nonatomic) BOOL provideDataModeNeedAnimation;
@property (nonatomic) Q customRefreshType;
@property (nonatomic) # customRequestDataPluginClass;
@property (nonatomic) <AWEMVDataPluginProtocol> customRequestDataPlugin;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShouldDisableFirstRenderCache:;
- (void)setRefreshMode:;
- (void)setProvideDataBlock:;
- (BOOL)shouldDisableFirstRenderCache;
- (unsigned long long)refreshMode;
- (id)provideDataBlock;
- (Class)customRequestDataPluginClass;
- (id)customRequestDataPlugin;
- (void)setCustomRequestDataPlugin:;
- (unsigned long long)customRefreshType;
- (BOOL)provideDataModeNeedAnimation;
- (void)setCustomRefreshType:;
- (void)setProvideDataModeNeedAnimation:;
- (void)setCustomRequestDataPluginClass:;
- (BOOL)forceRefresh;
- (void).cxx_destruct;
- (void)setForceRefresh:;
@end
