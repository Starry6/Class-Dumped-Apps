@interface AWEPOINavigationRouteInterceptor : NSObject
@property (nonatomic) NSArray settings;
@property (nonatomic) NSArray pages;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)interceptorActionBeforeTransferWithURLString:userInfo:;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:;
- (void)endIfNeeded;
- (BOOL)matchAndDealWithLaunchMode:tag:;
- (BOOL)matchAndDealClearTopWithTag:;
- (id)matchedViewControllerInPageStackWithTag:;
- (id)matchedViewControllerInSourceViewController:targetTag:;
- (void)setSettings:;
- (id)init;
- (id)settings;
- (void).cxx_destruct;
- (id)pages;
- (void)setPages:;
- (void)startIfNeeded;
+ (id)sharedInstance;
@end
