@interface AWEVendorRouter : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)transToXiguaVideoListPageWithParams:;
+ (void)transToXiguaPersonalPageWithParams:;
+ (void)preloadXiguaPersonalPageWithParams:;
+ (void)transToXiguaPersonalPageWithParams:enterFrom:;
+ (void)preloadXiguaPersonalPageWithParams:enterFrom:;
+ (void)transToXiguaPersonalPageWithParams:scene:launchFrom:location:;
+ (void)preloadXiguaPersonalPageWithParams:scene:launchFrom:location:;
+ (void)transToXiguaPersonalPageWithRouteModel:;
+ (void)preloadXiguaPersonalPageWithRouteModel:;
+ (void)transToDongchediCarPageWithPath:;
+ (BOOL)isSearchWithEnterFrom:;
+ (id)routeModelFromParams:scene:launchFrom:location:;
+ (id)commonTrackParamsWithEnterFrom:;
+ (BOOL)enableTransToLynxXiguaPersonalPage;
+ (id)genXiguaPersonalPageSchemaWithRouteModel:;
+ (id)schemaForTransToLynxXiguaPersonalPage;
@end
