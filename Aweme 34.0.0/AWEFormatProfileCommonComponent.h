@interface AWEFormatProfileCommonComponent : AWEIMComponentBase
- (void)didUpdateFormatRoom:;
- (BOOL)shouldFailFloatGestureRecognizer:;
- (id)displayInfoForFormat;
- (void)openFormatProfileInPrivateChat;
- (void)openFormatProfileInFormatChatSetting;
- (void)openFormatReport;
- (void)clearAllHistory;
- (void)componentDidMounted:;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isSelf;
+ (BOOL)canCreateComponentWithContext:;
@end
