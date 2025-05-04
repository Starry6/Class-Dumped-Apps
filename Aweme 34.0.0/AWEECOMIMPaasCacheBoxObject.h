@interface AWEECOMIMPaasCacheBoxObject : MTLModel
@property (nonatomic) double validityPeriod;
@property (nonatomic) double cacheTime;
@property (nonatomic) NSDictionary cacheDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCacheDict:;
- (double)validityPeriod;
- (void)setValidityPeriod:;
- (double)cacheTime;
- (void)setCacheTime:;
- (id)init;
- (void).cxx_destruct;
- (id)cacheDict;
+ (id)JSONKeyPathsByPropertyKey;
@end
