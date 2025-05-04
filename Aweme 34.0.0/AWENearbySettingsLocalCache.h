@interface AWENearbySettingsLocalCache : MTLModel
@property (nonatomic) AWENearbySettingsResponse nearbySettingsRsp;
@property (nonatomic) AWENearbyCacheToken cacheToken;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithNearbySettingsRsp:cacheToken:;
- (id)initWithNearbySettingsRsp:;
- (id)nearbySettingsRsp;
- (void)setNearbySettingsRsp:;
- (id)init;
- (id)cacheToken;
- (void).cxx_destruct;
- (void)setCacheToken:;
+ (id)JSONKeyPathsByPropertyKey;
@end
