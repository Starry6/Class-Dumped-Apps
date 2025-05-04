@interface AWEPOICraftsmanRedirectService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)interceptorActionBeforeTransferWithURLString:userInfo:;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:;
- (BOOL)needRedirectTransitionInfo:;
- (void)redirectRouterWithTransitionInfo:;
- (id)getUrlWithSkipRedirectTag:;
- (void)openUrlWithSkipRedirectTag:;
@end
