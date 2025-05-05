@interface CNContactDisableGuardianRestrictionsAction : CNContactAction
@property (nonatomic) CNContainer container;
@property (nonatomic) CNContactStore contactStore;
- (BOOL)isDestructive;
- (id)container;
- (id)title;
- (void).cxx_destruct;
- (id)contactStore;
- (BOOL)canPerformAction;
- (void)performActionWithSender:;
- (id)initWithContact:inContainer:contactStore:;
@end
