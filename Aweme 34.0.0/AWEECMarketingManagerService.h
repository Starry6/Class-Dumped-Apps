@interface AWEECMarketingManagerService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sendEventWithTargetPage:rit:component:eventName:params:;
- (void)removeWithTargetPage:rit:component:;
- (void)loadWithTargetPage:container:data:commonLogParams:extra:;
- (void)registerWithTargetPage:bizParams:;
- (void)showWithTargetPage:container:bizParams:callback:;
@end
