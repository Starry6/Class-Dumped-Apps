@interface AWESearchSmartFeatureConfig : NSObject
@property (nonatomic) q fetchType;
@property (nonatomic) NSString businessName;
@property (nonatomic) NSString cacheKey;
@property (nonatomic) NSDictionary featureFetchKeys;
- (id)featureFetchKeys;
- (void)setFeatureFetchKeys:;
- (id)cacheKey;
- (long long)fetchType;
- (void).cxx_destruct;
- (void)setCacheKey:;
- (id)businessName;
- (void)setBusinessName:;
- (void)setFetchType:;
@end
