@interface SSTransactionStore : NSObject
- (id)init;
- (void)takeKeepAliveWithTransactionID:;
- (void)releaseKeepAliveWithTransactionID:;
- (void).cxx_destruct;
+ (id)defaultStore;
@end
