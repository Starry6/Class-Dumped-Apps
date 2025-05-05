@interface CNContactListDeleteContactAction : NSObject
@property (nonatomic) CNContact contact;
@property (nonatomic) NSString containerIdentifier;
@property (nonatomic) CNUICoreRecentsManager recentsManager;
@property (nonatomic) CNContactStore contactStore;
- (void)setContactStore:;
- (id)containerIdentifier;
- (id)contact;
- (void)setContact:;
- (id)recentsManager;
- (void)setRecentsManager:;
- (void).cxx_destruct;
- (void)setContainerIdentifier:;
- (id)contactStore;
- (BOOL)executeAction;
- (void)undoAction;
- (id)initWithContact:contactStore:containerIdentifier:recentsManager:;
- (BOOL)executeDeleteAction;
- (void)undoDeleteAction;
+ (id)log;
@end
