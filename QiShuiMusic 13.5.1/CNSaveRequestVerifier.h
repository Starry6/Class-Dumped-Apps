@interface CNSaveRequestVerifier : NSObject
+ (id)insertedAndUpdatedContactsForSaveRequest:;
+ (BOOL)isValidSaveRequest:error:;
+ (BOOL)isSaveRequest:authorizedForSavingWithContext:error:;
+ (BOOL)_areDirectPropertiesOfSaveRequest:authorizedForSavingWithContext:error:;
+ (BOOL)_arePropertiesOfContacts:inSaveRequest:authorizedForSavingWithContext:error:;
+ (BOOL)_isEditingOfContacts:inSaveRequest:authorizedForSavingWithContext:error:;
@end
