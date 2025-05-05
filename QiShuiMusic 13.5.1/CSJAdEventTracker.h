@interface CSJAdEventTracker : NSObject
+ (id)pbu_preCacheLogExtWithModel:;
+ (void)trackExtraValueWithTag:label:adModel:extraDic:adExtraDataDic:;
+ (void)trackWithTag:label:adModel:extraDic:;
@end
