@interface CalAccountStoreChangeFilterDelegateForLegacyICBURestore : NSObject
- (BOOL)allowChangesToExistingTopLevelAccount:;
- (BOOL)allowCreationOfTopLevelAccountWithTypeIdentifier:;
@end
