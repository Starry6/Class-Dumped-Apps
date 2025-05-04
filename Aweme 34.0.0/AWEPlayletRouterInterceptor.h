@interface AWEPlayletRouterInterceptor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)interceptorActionBeforeTransferWithURLString:userInfo:;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:;
- (unsigned long long)AWERouterInterceptActionWithURLString:;
- (id)init;
+ (id)sharedInterceptor;
@end
