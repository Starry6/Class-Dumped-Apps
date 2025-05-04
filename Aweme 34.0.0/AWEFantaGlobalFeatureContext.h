@interface AWEFantaGlobalFeatureContext : NSObject
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} lock;
@property (nonatomic) NSString searchEnterMethod;
@property (nonatomic) NSString searchKeyword;
- (id)searchKeyword;
- (void)setSearchKeyword:;
- (id)searchEnterMethod;
- (void)setSearchEnterMethod:;
- (id)init;
- (void)dealloc;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
