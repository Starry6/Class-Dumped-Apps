@interface AWEShortCutSyncBlockRule : AWEExternalRouterBlockBaseRule
@property (nonatomic) NSString shortcutItemType;
- (BOOL)needBlockURLString:context:userActivity:linkSession:;
- (id)syncHandleURLString:context:scene:linkSession:;
- (void)setShortcutItemType:;
- (id)shortcutItemType;
- (void).cxx_destruct;
- (long long)ruleType;
@end
