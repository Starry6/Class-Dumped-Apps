@interface PHLimitedLibraryPicker : NSObject
+ (void)presentLimitedLibraryPickerForNilViewControllerWithOptions:;
+ (void)presentLimitedLibraryPickerFromViewController:options:;
+ (id)_createLimitedLibraryImagePickerController;
@end
