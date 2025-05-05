@interface TMCacheGroup : NSObject
@property (nonatomic) NSArray apis;
@property (nonatomic) NSString store;
@property (nonatomic) NSString strategy;
@property (nonatomic) NSDictionary params;
- (id)apis;
- (void)setApis:;
- (id)strategy;
- (void)setStore:;
- (void).cxx_destruct;
- (void)setStrategy:;
- (id)store;
- (id)params;
- (void)setParams:;
@end
