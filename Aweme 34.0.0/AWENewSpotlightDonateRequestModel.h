@interface AWENewSpotlightDonateRequestModel : MTLModel
@property (nonatomic) NSArray fixedQuerys;
@property (nonatomic) NSArray querys;
@property (nonatomic) NSNumber expireTime;
@property (nonatomic) BOOL hitAB;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)querys;
- (void)setQuerys:;
- (id)fixedQuerys;
- (void)setFixedQuerys:;
- (BOOL)hitAB;
- (void)setHitAB:;
- (void).cxx_destruct;
- (id)expireTime;
- (void)setExpireTime:;
+ (id)fixedQuerysJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)querysJSONTransformer;
@end
