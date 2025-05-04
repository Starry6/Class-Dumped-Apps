@interface AWEShowPlayletFastEnterModelHelper : NSObject
@property (nonatomic) NSMutableDictionary awemeModelDic;
- (void)cacheAwemeModels:pageString:enterFrom:;
- (id)awemeModelDic;
- (void)cacheAwemeModelsWithIdList:pageString:enterFrom:;
- (void)cacheAwemeModelsWithDicList:pageString:enterFrom:;
- (void)deleteAwemeModelsWithPageString:;
- (void)setAwemeModelDic:;
- (void).cxx_destruct;
+ (id)sharedHelper;
@end
