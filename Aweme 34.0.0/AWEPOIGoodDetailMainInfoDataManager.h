@interface AWEPOIGoodDetailMainInfoDataManager : NSObject
+ (BOOL)enableJSONSonicOptimize;
+ (void)fetchMainInfoWithParams:headers:optionalPath:completion:;
+ (void)fetchPrefetchImageWithParams:headers:optionalPath:completion:;
+ (void)fetchGoodDecisionUpdateWithParams:headers:completion:;
+ (void)fetchBizCodeWithParams:headers:completion:;
+ (void)processModel:error:completion:;
+ (id)getServerTimingInner:;
@end
