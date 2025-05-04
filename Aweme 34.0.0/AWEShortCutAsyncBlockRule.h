@interface AWEShortCutAsyncBlockRule : AWEExternalRouterBlockBaseRule
@property (nonatomic) NSString shortcutItemType;
- (BOOL)needBlockURLString:context:userActivity:linkSession:;
- (void)handleURLString:context:scene:linkSession:completion:;
- (void)setShortcutItemType:;
- (id)shortcutItemType;
- (void).cxx_destruct;
@end
