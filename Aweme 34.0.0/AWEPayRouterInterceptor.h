@interface AWEPayRouterInterceptor : NSObject
@property (nonatomic) NSArray schemeHandlers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)interceptorActionBeforeTransferWithURLString:userInfo:;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:;
- (void)setSchemeHandlers:;
- (id)init;
- (void).cxx_destruct;
- (id)schemeHandlers;
@end
