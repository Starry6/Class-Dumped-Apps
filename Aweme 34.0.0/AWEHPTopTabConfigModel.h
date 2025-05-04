@interface AWEHPTopTabConfigModel : MTLModel
@property (nonatomic) NSDictionary sideBarData;
@property (nonatomic) NSString rightFirstEntrance;
@property (nonatomic) NSArray tabList;
@property (nonatomic) NSString landTab;
@property (nonatomic) NSString mainTab;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabList;
- (id)rightFirstEntrance;
- (id)landTab;
- (void)setTabList:;
- (id)mainTab;
- (void)setMainTab:;
- (void)setLandTab:;
- (id)sideBarData;
- (void)setSideBarData:;
- (void)setRightFirstEntrance:;
- (void).cxx_destruct;
+ (id)tabListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
