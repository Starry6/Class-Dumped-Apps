@interface AWELiveNearbyLinkerUsers : AWEBaseApiModel
@property (nonatomic) q count;
@property (nonatomic) NSArray userInfos;
- (long long)count;
- (void).cxx_destruct;
- (id)userInfos;
+ (id)userInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
