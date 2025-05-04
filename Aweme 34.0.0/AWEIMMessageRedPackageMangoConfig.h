@interface AWEIMMessageRedPackageMangoConfig : NSObject
@property (nonatomic) AWEIMMessageRedPackageMangoVenueConfig venueConfig;
@property (nonatomic) AWEIMMessageRedPackageMangoRouteConfig routeConfig;
@property (nonatomic) AWEIMMessageRedPackageMangoPetElfConfig petElfConfig;
- (id)routeConfig;
- (id)petElfConfig;
- (id)venueConfig;
- (void)setVenueConfig:;
- (void)setRouteConfig:;
- (void)setPetElfConfig:;
- (void).cxx_destruct;
- (id)initWithDictionary:;
+ (id)sharedConfig;
@end
