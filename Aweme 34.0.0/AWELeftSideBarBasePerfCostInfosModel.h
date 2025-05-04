@interface AWELeftSideBarBasePerfCostInfosModel : NSObject
@property (nonatomic) NSMutableDictionary costDic;
- (void)setCostTime:withCostKey:;
- (double)getCostTimeByKey:;
- (void)setCostDic:;
- (id)costDic;
- (id)getCostInfoString;
- (id)init;
- (void).cxx_destruct;
@end
