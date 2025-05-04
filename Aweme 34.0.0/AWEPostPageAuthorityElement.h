@interface AWEPostPageAuthorityElement : AWEPostPageElement
- (void)contextDidReady;
- (id)service;
- (BOOL)isVisible;
- (BOOL)isEnabled;
+ (void)_aweLazyRegisterPostPage;
+ (id)type;
@end
