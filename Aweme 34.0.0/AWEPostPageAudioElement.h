@interface AWEPostPageAudioElement : AWEPostPageElement
- (void)checkOfflineMusic;
- (void)p_handleOfflineMusicIfNeeded;
- (id)service;
- (void)viewDidLoad;
- (BOOL)isVisible;
- (void)viewDidAppear:;
- (BOOL)isEnabled;
+ (void)_aweLazyRegisterPostPage;
+ (id)type;
@end
