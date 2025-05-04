@interface AWECreativeInspirationSupportCollectHandler : NSObject
+ (BOOL)syncGetEnableInspirationTabItemUpdateFixStatus;
+ (BOOL)syncGetEnableRefreshCollectInspirationTabItemUpdateFixStatus;
+ (id)syncGetEffectNoHotAwemeCoverPhotoUrlContent;
+ (BOOL)syncGetEnableInspirationTabAllMaterialsSupportCollectionUIFixStatus;
+ (BOOL)isEnableInspirationTabAllMaterialsSupportCollectionStatus;
+ (BOOL)isAwemeFromEffectNotHotAwemeCoverPhoto:;
+ (id)effectNotHotAwemeCoverPhoto;
+ (id)trackerParamsWithPublishViewModel:itemId:tabName:enterFrom:targetInfo:;
@end
