@interface PSPhotoServicesAuthorizationLevelController : PSListItemsController
@property (nonatomic) NSDictionary details;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSBundle entityBundle;
- (id)specifiers;
- (void)setDetails:;
- (void)setSpecifier:;
- (void)setDisplayName:;
- (id)displayName;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (id)details;
- (void)_presentImagePickerForModifyingSelection;
- (id)footerStringForSpecifiers:;
- (id)_modifySelectionSpecifiers;
- (id)entityBundle;
- (void)setEntityBundle:;
@end
