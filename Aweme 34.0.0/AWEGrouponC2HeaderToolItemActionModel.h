@interface AWEGrouponC2HeaderToolItemActionModel : MTLModel
@property (nonatomic) q type;
@property (nonatomic) NSString jumpUrl;
@property (nonatomic) NSString jumpTargetUrl;
@property (nonatomic) NSString subEntranceListJson;
@property (nonatomic) AWEGrouponC2HeaderToolItemModel switchEntranceConfig;
@property (nonatomic) NSArray subEntranceList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)jumpUrl;
- (void)setJumpUrl:;
- (id)subEntranceListJson;
- (id)subEntranceList;
- (id)jumpTargetUrl;
- (void)setJumpTargetUrl:;
- (void)setSubEntranceListJson:;
- (id)switchEntranceConfig;
- (void)setSwitchEntranceConfig:;
- (void)setSubEntranceList:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
@end
