@interface AWEPOIRouterVerifyService : HTSService
@property (nonatomic) NSMutableArray interceptors;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)addInterceptor:;
- (id)interceptors;
- (void)setInterceptors:;
- (void)removeInterceptor:;
- (void)verifyForKey:params:;
- (void)verifyForRouter:;
- (id)init;
- (void).cxx_destruct;
+ (void)injectBlockExecuteAfterServiceInit:;
@end
