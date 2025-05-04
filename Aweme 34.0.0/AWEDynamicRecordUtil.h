@interface AWEDynamicRecordUtil : NSObject
+ (void)downloadImageResourceWithUrl:completion:;
+ (BOOL)higherThanMinAppVersion:;
+ (id)removeParam:inUrl:;
+ (id)addParam:inUrl:;
+ (id)extractRecourceIDNeedLoad:resourceLoadType:;
+ (void)downloadImageResourceWithUrls:;
+ (void)downloadEffectWithEffectIDs:;
+ (void)requestDynamicActivityDataWithActivityId:schemaModeId:schema:trackInfo:showToast:completion:;
+ (void)downloadWholeResourceIn:resourceLoadType:;
@end
