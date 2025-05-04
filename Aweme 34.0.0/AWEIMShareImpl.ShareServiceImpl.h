@interface AWEIMShareImpl.ShareServiceImpl : HTSService
- (BOOL)enableWithScene:;
- (id)createContactListWithConfig:delegate:;
- (id)additionTextViewWithUIConfig:;
- (id)titleLabelWithContext:scene:;
- (id)sendMessageWithRequest:completion:;
- (id)init;
- (void)setup;
@end
