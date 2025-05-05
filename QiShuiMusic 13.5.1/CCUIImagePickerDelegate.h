@interface CCUIImagePickerDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)imagePickerController:didFinishPickingMediaWithInfo:;
- (void)imagePickerControllerDidCancel:;
@end
