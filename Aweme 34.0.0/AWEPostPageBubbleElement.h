@interface AWEPostPageBubbleElement : AWEPostPageElement
- (id)service;
- (BOOL)isVisible;
- (void)viewDidAppear:;
- (BOOL)isEnabled;
+ (void)_aweLazyRegisterPostPage;
+ (id)type;
@end
