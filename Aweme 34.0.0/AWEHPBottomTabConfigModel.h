@interface AWEHPBottomTabConfigModel : AWEBaseApiModel
@property (nonatomic) NSDictionary traceInfo;
@property (nonatomic) AWEHPTabConfigModel tabConfig;
@property (nonatomic) NSString tabDataHash;
@property (nonatomic) NSArray tabList;
@property (nonatomic) NSString landTab;
@property (nonatomic) NSString mainTab;
- (id)tabList;
- (id)tabConfig;
- (void)setTabConfig:;
- (id)traceInfo;
- (id)landTab;
- (void)setTabList:;
- (void)setTraceInfo:;
- (id)mainTab;
- (void)setMainTab:;
- (id)tabDataHash;
- (void)setTabDataHash:;
- (void)setLandTab:;
- (void).cxx_destruct;
+ (id)tabListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
