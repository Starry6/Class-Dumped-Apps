@interface AWEPOISaleChannelVerifyInterceptor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)interceptorActionBeforeTransferWithURLString:userInfo:;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:;
- (BOOL)containerSaleChannelInfo:;
- (void)trackErrorInfoWith:;
- (void)showErrorAlert:;
- (id)init;
+ (id)sharedInterceptor;
@end
