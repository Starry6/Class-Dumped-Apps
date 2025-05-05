@interface CalAllFilteringMigrationAccountStoreDelegate : NSObject
- (BOOL)allowChangesToExistingTopLevelAccount:;
- (BOOL)allowCreationOfTopLevelAccountWithTypeIdentifier:;
@end
