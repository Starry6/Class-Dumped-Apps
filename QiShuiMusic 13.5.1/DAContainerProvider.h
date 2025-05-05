@interface DAContainerProvider : NSObject
- (BOOL)setLastSyncDateForContainer:;
- (id)containerWithExternalIdentifier:forAccountWithExternalIdentifier:;
- (void)mergeAllRecordsIntoContainer:shouldInsertChangeHistoryRecords:;
- (void)setDefaultContainer:withLocalDBHelper:onlyIfNotSet:;
- (id)allContainers;
- (id)createNewContainerWithType:name:externalIdentifier:constraintsPath:syncData:contentReadonly:propertiesReadonly:forAccount:;
- (id)allContainersForAccountWithExternalIdentifier:;
+ (id)providerWithContactStore:;
+ (id)providerWithAddressBook:;
@end
