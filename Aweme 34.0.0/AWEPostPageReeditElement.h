@interface AWEPostPageReeditElement : AWEPostPageElement
- (void)onNetworkChanged:;
- (void)contextDidReady;
- (void)replaceMusicFinished:;
- (id)privacy;
- (void)viewWillDisappear:;
- (void)dealloc;
- (id)service;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (BOOL)isVisible;
- (BOOL)isEnabled;
+ (void)_aweLazyRegisterPostPage;
+ (id)type;
@end
