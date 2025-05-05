@interface CNContactListRemoveContactFromGroupAction : NSObject
@property (nonatomic) CNContact contact;
@property (nonatomic) NSString containerIdentifier;
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) CNGroup group;
- (void)setContactStore:;
- (id)containerIdentifier;
- (id)contact;
- (void)setContact:;
- (void)setGroup:;
- (id)group;
- (void).cxx_destruct;
- (void)setContainerIdentifier:;
- (id)contactStore;
- (id)initWithContact:contactStore:containerIdentifier:;
- (BOOL)executeAction;
- (void)undoAction;
- (BOOL)executeRemoveFromGroupAction;
- (void)undoRemoveFromGroupAction;
+ (id)log;
@end
