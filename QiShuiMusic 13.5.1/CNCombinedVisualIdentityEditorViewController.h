@interface CNCombinedVisualIdentityEditorViewController : UIViewController
@property (nonatomic) CNPhotoPickerDataSource dataSource;
@property (nonatomic) UISegmentedControl segmentedControl;
@property (nonatomic) CNVisualIdentityAvatarStyleEditorViewController textEditor;
@property (nonatomic) CNVisualIdentityAvatarStyleEditorViewController emojiEditor;
@property (nonatomic) CNVisualIdentityAvatarStyleEditorViewController selectedEditor;
@property (nonatomic) <CNVisualIdentityItemEditorViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataSource:;
- (void)setDelegate:;
- (id)dataSource;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)segmentedControl;
- (void)setSegmentedControl:;
- (void)didTapCancel;
- (void)didTapDone;
- (void)setupBarButtonItems;
- (void)setupSegmentedControl;
- (id)updatedProviderItem;
- (void)updateDoneButtonEnabledState;
- (void)_segmentedControlDidChange:;
- (void)avatarStyleEditor:didUpdateItem:;
- (id)initWithProviderItem:dataSource:;
- (id)_newStyleEditorWithItem:;
- (void)setupEditors;
- (void)_updateEditorsVisibility;
- (id)textEditor;
- (void)setTextEditor:;
- (id)emojiEditor;
- (void)setEmojiEditor:;
- (id)selectedEditor;
- (void)setSelectedEditor:;
+ (id)log;
@end
