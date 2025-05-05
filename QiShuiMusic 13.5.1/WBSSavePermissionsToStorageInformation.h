@interface WBSSavePermissionsToStorageInformation : NSObject
@property (nonatomic) WBSWebExtensionData webExtension;
@property (nonatomic) BOOL permissionsWereUpdatedDueToAnExternalChange;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)webExtension;
- (id)initWithWebExtension:permissionsWereUpdatedDueToAnExternalChange:;
- (BOOL)permissionsWereUpdatedDueToAnExternalChange;
@end
