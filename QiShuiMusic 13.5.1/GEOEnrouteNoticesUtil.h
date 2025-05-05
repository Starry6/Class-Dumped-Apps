@interface GEOEnrouteNoticesUtil : NSObject
+ (id)createEnrouteNoticesForComposedRoute:routeInitializerData:;
+ (id)_enrouteNoticesForRoute:provider:;
+ (void)_forEachGeoEnrouteNoticeOnRoute:handler:;
@end
