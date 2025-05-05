@interface CNContactShareWithFamilyAction : CNContactAction
- (BOOL)isDestructive;
- (id)title;
- (BOOL)canPerformAction;
- (void)performActionWithSender:;
- (BOOL)familySharedContainerExists;
@end
