@interface AWEIMChatCellComponentBase : AWEIMCellComponentBase
- (void)setPresenterAdapter:;
- (void)reloadPresenter;
- (id)presenterForSnapshot;
- (void)reloadChatCell;
+ (BOOL)canCreateComponentWithContext:;
@end
