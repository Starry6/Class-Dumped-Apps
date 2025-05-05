@interface CSJNativeExpressControlManager : NSObject
+ (BOOL)canRequestRefreshAdWithSlot:;
+ (BOOL)canShowRefreshAdWithSlot:materielMeta:;
+ (BOOL)isReachMaxNumberWithSlot:materielMeta:isShow:;
+ (id)materialMetasOfAdViews:;
+ (id)maxFullScreenRewardedStyleViewSizeOfMetas:;
+ (long long)maxNumberOfRefreshAd:;
+ (id)maxSizeOfAdViewMetas:;
+ (id)maxSizeOfAdViews:;
+ (id)minAspectMarginValueViewOfAdViews:;
+ (void)reportWithAdSlot:materielMeta:;
+ (long long)requestNumberOfRefreshAd;
+ (BOOL)sameFullScreenRatio:;
+ (void)showRefreshWithRit:;
+ (id)dateFormatter;
+ (id)today;
@end
