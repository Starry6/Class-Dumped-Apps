@interface AWENetworkCacheStrategy : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) Q fetchStrategy;
@property (nonatomic) Q expiredStrategy;
@property (nonatomic) Q storeStrategy;
@property (nonatomic) q expiredCount;
@property (nonatomic) double timeout;
@property (nonatomic) NSDictionary additionalInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)fetchStrategy;
- (void)setFetchStrategy:;
- (void)setExpiredStrategy:;
- (unsigned long long)expiredStrategy;
- (unsigned long long)storeStrategy;
- (void)setStoreStrategy:;
- (long long)expiredCount;
- (void)setExpiredCount:;
- (void)setAdditionalInfo:;
- (id)additionalInfo;
- (id)init;
- (void)setKey:;
- (double)timeout;
- (id)key;
- (void)setTimeout:;
- (void).cxx_destruct;
@end
