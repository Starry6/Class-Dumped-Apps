@interface BUIntelligNetConfig : NSObject
@property (nonatomic) BUNetworkRating rating;
@property (nonatomic) BOOL useH3;
@property (nonatomic) q netQuality;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isUseH3;
- (void)networkPolicyUpdated:fromCache:;
- (id)_statsParamsWithType:trackInfo:eventExtra:;
- (id)currentNetworkReport;
- (void)handlePolicy:;
- (BOOL)isProxyedOrVPN;
- (long long)netQuality;
- (id)rating;
- (void)start;
- (id)currentLocation;
- (void)stop;
- (void).cxx_destruct;
- (void)setRating:;
- (void)setup:;
- (id)initWithJSONDict:;
+ (id)defaultConfig;
@end
