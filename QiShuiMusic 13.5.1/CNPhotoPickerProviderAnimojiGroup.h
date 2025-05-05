@interface CNPhotoPickerProviderAnimojiGroup : CNPhotoPickerProviderGroup
- (BOOL)allowAddItem;
- (id)initWithProviders:environment:allowAddItem:;
- (BOOL)canCreateMemoji;
@end
