@interface CNUIContactStoreSaveExecutor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)executeSaveWithConfiguration:saveDelegate:;
- (BOOL)saveShadowContactForSaveConfiguration:;
- (id)validatedContactForSaveConfiguration:;
- (BOOL)handleContainerContextForSaveConfiguration:contactToSave:saveDelegate:issuedRequestIdentifiers:additionalLinkedContacts:;
- (void)handleGroupContextForSaveConfiguration:contactToSave:issuedRequestIdentifiers:saveDelegate:;
- (id)saveLinkedContactsWithSaveConfiguration:contactToSave:additionalLinkedContacts:issuedRequestIdentifiers:saveDelegate:;
- (BOOL)performSaveForMutableContact:group:container:saveConfiguration:issuedRequestIdentifiers:;
@end
