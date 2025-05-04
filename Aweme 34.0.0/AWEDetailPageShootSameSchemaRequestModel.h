@interface AWEDetailPageShootSameSchemaRequestModel : NSObject
@property (nonatomic) NSArray materialList;
@property (nonatomic) Q detailPageType;
@property (nonatomic) NSString identify;
@property (nonatomic) NSDictionary activityMobDic;
@property (nonatomic) NSDictionary extraInfoDic;
@property (nonatomic) AWEAwemeModel model;
- (id)extraInfoDic;
- (void)setExtraInfoDic:;
- (unsigned long long)detailPageType;
- (id)activityMobDic;
- (void)setMaterialList:;
- (void)setActivityMobDic:;
- (void)setDetailPageType:;
- (id)materialList;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (id)identify;
- (void)setIdentify:;
@end
