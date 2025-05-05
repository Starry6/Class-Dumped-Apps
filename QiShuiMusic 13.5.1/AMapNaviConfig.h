@interface AMapNaviConfig : NSObject
@property (nonatomic) NSString appScheme;
@property (nonatomic) NSString appName;
@property (nonatomic) {CLLocationCoordinate2D=dd} destination;
@property (nonatomic) q strategy;
- (id)appScheme;
- (void)setAppScheme:;
- (void)setDestination:;
- (long long)strategy;
- (id)destination;
- (void)setAppName:;
- (id)appName;
- (void).cxx_destruct;
- (void)setStrategy:;
- (id)description;
@end
