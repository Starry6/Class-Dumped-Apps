@interface AWEDataLayerKVStoreConfig : NSObject
@property (nonatomic) Q cacheOptions;
@property (nonatomic) Q maxAge;
@property (nonatomic) Q lastUpdate;
@property (nonatomic) NSInteger cleanable;
@property (nonatomic) NSString userId;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (void)setCacheOptions:;
- (int)cleanable;
- (void)setCleanable:;
- (void)setLastUpdate:;
- (void)setMaxAge:;
- (unsigned long long)maxAge;
- (id)init;
- (id)userId;
- (unsigned long long)lastUpdate;
- (id)extra;
- (void).cxx_destruct;
- (unsigned long long)cacheOptions;
- (void)setUserId:;
@end
