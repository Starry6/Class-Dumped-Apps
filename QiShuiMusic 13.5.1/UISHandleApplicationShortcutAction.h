@interface UISHandleApplicationShortcutAction : BSAction
@property (nonatomic) SBSApplicationShortcutItem sbsShortcutItem;
@property (nonatomic) UIApplicationShortcutItem uiShortcutItem;
- (long long)UIActionType;
- (id)sbsShortcutItem;
- (BOOL)isKindOfClass:;
- (id)keyDescriptionForSetting:;
- (id)uiShortcutItem;
- (id)initWithSBSShortcutItem:;
@end
