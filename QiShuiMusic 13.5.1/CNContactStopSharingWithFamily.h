@interface CNContactStopSharingWithFamily : CNContactAction
- (BOOL)isDestructive;
- (id)title;
- (BOOL)wrapTitle;
- (BOOL)canPerformAction;
- (void)performActionWithSender:;
- (BOOL)familySharedContainerExists;
@end
