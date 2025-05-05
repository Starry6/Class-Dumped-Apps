@interface CNPhotoPickerViewController : CNVisualIdentityPickerViewController
@property (nonatomic) CNMutableContact pendingEditContact;
@property (nonatomic) NSString assignActionTitleOverride;
@property (nonatomic) <CNPhotoPickerViewControllerDelegate> delegate;
- (void)done:;
- (void)cancel:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)contactViewCache;
- (id)initWithContact:style:configuration:;
- (void)photoViewDidUpdate:;
- (id)viewControllerForPhotoView:;
- (void)photoView:didAcceptDropOfImageData:;
- (id)pendingEditContact;
- (void)setPendingEditContact:;
- (void)updateHeaderViewAvatar;
- (void)updatePendingEditContact;
+ (id)navigationControllerForPicker:;
+ (id)log;
+ (BOOL)canShowAvatarEditor;
+ (id)photoPickerForGameCenterWithContact:;
@end
