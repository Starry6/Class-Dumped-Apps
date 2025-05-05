@interface CNUIContactStoreLinkedContactSaveExecutor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)executeSaveWithConfiguration:saveDelegate:;
- (id)saveLinkedContactChanges:mutableContact:contactStore:editingLinkedContacts:ignoresParentalRestrictions:saveWasAuthorized:issuedSaveRequestIdentifiers:;
@end
