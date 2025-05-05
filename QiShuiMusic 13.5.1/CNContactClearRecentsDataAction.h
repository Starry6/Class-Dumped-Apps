@interface CNContactClearRecentsDataAction : CNContactAction
@property (nonatomic) CNContactRecentsReference recentsData;
@property (nonatomic) CNUICoreRecentsManager coreRecentsManager;
- (BOOL)isDestructive;
- (id)title;
- (void).cxx_destruct;
- (BOOL)canPerformAction;
- (void)performActionWithSender:;
- (id)recentsData;
- (id)initWithRecentsData:coreRecentsManager:;
- (id)coreRecentsManager;
@end
