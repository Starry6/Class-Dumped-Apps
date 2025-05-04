@interface AWENearbyGrouponRefreshV2Config : NSObject
@property (nonatomic) NSArray refreshType;
@property (nonatomic) q pullType;
@property (nonatomic) NSArray cardTypeList;
@property (nonatomic) NSArray resourceTypeList;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSDictionary refreshParams;
@property (nonatomic) NSArray currentTabIds;
@property (nonatomic) Q refreshScene;
- (long long)pullType;
- (void)setPullType:;
- (unsigned long long)refreshScene;
- (void)setRefreshScene:;
- (void)setCardTypeList:;
- (void)setResourceTypeList:;
- (id)refreshParams;
- (id)resourceTypeList;
- (id)defaultRefreshTypeByPullType:;
- (id)cardTypeList;
- (id)currentTabIds;
- (void)setCurrentTabIds:;
- (id)init;
- (void).cxx_destruct;
- (id)params;
- (void)setRefreshType:;
- (id)refreshType;
- (void)setParams:;
@end
