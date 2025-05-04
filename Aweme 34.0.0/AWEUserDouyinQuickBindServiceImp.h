@interface AWEUserDouyinQuickBindServiceImp : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isShowingLoginWindow;
- (id)quickBindViewControllerWithPlatform:useType:enterFrom:clientKey:trackParams:didCancelBindBlock:didFinishBindBlock:;
- (id)quickBindViewControllerWithPlatform:useType:enterFrom:clientKey:didCancelBindBlock:didFinishBindBlock:;
- (void)showBindSafeMobileViewController:completionBlock:;
- (BOOL)enableQuickBindForHalfScreen:;
- (id)getLastLoginUser;
- (id)getLastLoginUserDictionary;
- (id)getVisibleLoginWindow;
+ (BOOL)isBind:;
@end
