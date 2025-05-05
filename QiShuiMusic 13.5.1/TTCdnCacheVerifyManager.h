@interface TTCdnCacheVerifyManager : NSObject
- (BOOL)isVerifyEnabled;
- (void)addCdnCacheVerifyRequestFilter;
- (BOOL)filterRule:;
- (id)generateVerifyRequestFilterBlock;
- (id)generateVerifyResponseChainFilterBlock;
- (id)generateVerifyValue;
- (void)onConfigChange:data:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
