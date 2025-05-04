@interface AWEGrouponHalfScreenLocationCache : MTLModel
@property (nonatomic) AWEGrouponCacheToken cacheToken;
@property (nonatomic) NSDictionary cacheParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cacheParams;
- (void)setCacheParams:;
- (id)initWithNearbyHalfScreenLocationParams:;
- (id)cacheToken;
- (void).cxx_destruct;
- (void)setCacheToken:;
+ (id)JSONKeyPathsByPropertyKey;
@end
