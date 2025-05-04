@interface AWEEcomSearchViewHelper : NSObject
+ (void)sendMiddlePageTopBgInfoRequest:uid:resetImageBlock:;
+ (void)markViewTheme:forceLight:;
+ (id)applyRect:leftRightCorner:;
+ (void)sendSaasMiddlePageTopBgInfoRequest:uid:resetImageBlock:;
+ (void)sendSaasEcomSearchSkinShowTracker:isCache:styleId:;
+ (id)getEcomMiddlePageTopBgModelInfo:;
+ (void)sendNoSaasEcomSearchSkinShowTracker:isCache:styleId:;
+ (void)sendNoSaasMiddlePageTopBgInfoRequest:uid:resetImageBlock:;
@end
