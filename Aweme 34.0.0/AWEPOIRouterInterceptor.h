@interface AWEPOIRouterInterceptor : NSObject
@property (nonatomic) AWEPOIReflowResourceService reflowService;
@property (nonatomic) AWEPOIWebRedirectService webRedirectService;
@property (nonatomic) AWEPOICraftsmanRedirectService craftsmanCodeRedirectService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)interceptorActionBeforeTransferWithURLString:userInfo:;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:;
- (void)setWebRedirectService:;
- (id)webRedirectService;
- (id)craftsmanCodeRedirectService;
- (id)reflowService;
- (void)setReflowService:;
- (void)setCraftsmanCodeRedirectService:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInterceptor;
@end
