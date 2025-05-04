@interface AWESearchMiddlePagePreLayoutManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)shouldUseAnnieX;
+ (id)userRecommendSearchSwitch;
+ (void)prelayoutForScene:schemaDic:extraParams:;
+ (void)prelayoutForScene:searchUrl:extraParams:;
+ (void)clearCacheForScene:searchUrl:extraParams:;
+ (void)p_prelayoutForScene:WithIsFirstTime:sourceParams:;
+ (id)searchMiddleLynxConfigWith:;
+ (id)searchMiddleLynxRawDataWithConfig:;
+ (id)getPrelayoutLynxConfigWith:withModel:;
+ (BOOL)isOnlinePackages;
+ (id)getLynxInitRawDataParamsWithConfig:;
+ (id)searchMiddleHistory:model:;
+ (id)getExtraCommonParamsWith:;
+ (void)clearCacheForScene:schemaDic:extraParams:;
+ (id)customPrelayoutParamsWith:withModel:;
+ (id)feedExtraCommonParamsWith:;
+ (id)feedCustomLynxParamsWith:withModel:;
+ (void)prelayoutWithIsFirstTime:sourceParams:;
+ (void)clearCache;
@end
