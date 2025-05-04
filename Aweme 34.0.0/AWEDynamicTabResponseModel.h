@interface AWEDynamicTabResponseModel : AWEBaseApiModel
@property (nonatomic) NSDictionary intentInfoDic;
@property (nonatomic) AWESearchTabGuideResponse guide;
@property (nonatomic) NSArray tabs;
@property (nonatomic) BOOL enableAlienatedTabShow;
@property (nonatomic) NSMutableDictionary alienatedTabs;
@property (nonatomic) NSString logid;
- (id)logid;
- (void)setLogid:;
- (id)intentInfoDic;
- (void)setIntentInfoDic:;
- (void)setEnableAlienatedTabShow:;
- (void)setAlienatedTabs:;
- (id)alienatedTabs;
- (BOOL)enableAlienatedTabShow;
- (void).cxx_destruct;
- (id)tabs;
- (void)setTabs:;
- (id)guide;
- (void)setGuide:;
+ (id)tabsJSONTransformer;
+ (id)guideJSONTransformer;
+ (id)alienatedTabsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
