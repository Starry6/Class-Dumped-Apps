@interface CNUIContactSaveConfiguration : NSObject
@property (nonatomic) CNContact contact;
@property (nonatomic) CNMutableContact mutableContact;
@property (nonatomic) CNMutableContact shadowCopyOfReadonlyContact;
@property (nonatomic) NSMutableArray editingLinkedContacts;
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) CNGroup parentGroup;
@property (nonatomic) CNContainer parentContainer;
@property (nonatomic) CNUIContainerContext containerContext;
@property (nonatomic) CNUIGroupContext groupContext;
@property (nonatomic) BOOL ignoresParentalRestrictions;
@property (nonatomic) BOOL saveWasAuthorized;
- (id)contact;
- (BOOL)ignoresParentalRestrictions;
- (void).cxx_destruct;
- (id)contactStore;
- (id)groupContext;
- (id)parentGroup;
- (BOOL)saveWasAuthorized;
- (id)parentContainer;
- (id)mutableContact;
- (id)editingLinkedContacts;
- (id)initWithContact:mutableContact:editingLinkedContacts:contactStore:ignoresParentalRestrictions:saveWasAuthorized:;
- (id)initWithContact:mutableContact:shadowCopyOfReadonlyContact:editingLinkedContacts:contactStore:parentGroup:parentContainer:containerContext:groupContext:ignoresParentalRestrictions:saveWasAuthorized:;
- (id)copyWithEditingLinkedContacts:;
- (id)shadowCopyOfReadonlyContact;
- (id)containerContext;
@end
