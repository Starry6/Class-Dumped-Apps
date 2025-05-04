@interface AWEDiscoverDPlayletPreloadRequestUtil : NSObject
+ (void)preloadSeriesAwemeRequestWithParams:holder:scene:enterFrom:;
+ (id)tokenPreloadRequestWithParams:holder:scene:;
+ (BOOL)preloadEnable;
+ (long long)cursorWithParams:;
+ (id)timeIdentifyWithScene:cursor:;
+ (double)preloadRequestExpired;
+ (void)startRequestTrackerWithFrom:scene:playletID:;
+ (id)preloadRequestParamsWithQuery:scene:enterFrom:;
+ (void)responseTrackerWithFrom:scene:playletID:delta:error:;
+ (id)resultIdentifyWithScene:cursor:;
+ (long long)currentEpisodeWithParams:;
+ (void)nonCursorTrackerWithFrom:scene:playletID:;
+ (void)resetTimeIdentifyWithHolder:key:;
+ (void)requestReuseTrackerWithFrom:scene:playletID:;
@end
