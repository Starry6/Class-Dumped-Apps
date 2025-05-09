@interface CNVisualIdentityAvatarStyleEditorViewController : UIViewController
@property (nonatomic) UICollectionView styleCollectionView;
@property (nonatomic) NSLayoutConstraint avatarViewSizeConstraint;
@property (nonatomic) NSLayoutConstraint avatarViewTopConstraint;
@property (nonatomic) CNPhotoPickerVariantsManager variantsManager;
@property (nonatomic) NSArray variantProviderItems;
@property (nonatomic) CNPhotoPickerProviderItem providerItem;
@property (nonatomic) CNVisualIdentityEditablePrimaryAvatarViewController editableAvatarViewController;
@property (nonatomic) <CNVisualIdentityAvatarStyleEditorViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setDelegate:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)delegate;
- (void).cxx_destruct;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)providerItem;
- (id)variantsManager;
- (void)setVariantsManager:;
- (void)didTapEditableAvatar:;
- (void)editableAvatarViewController:didUpdateWithProviderItem:;
- (BOOL)editableAvatarViewControllerShouldBecomeFirstResponder:;
- (id)initWithProviderItem:variantsManager:;
- (void)setupEditableAvatarViewController;
- (void)beginEditingAvatar;
- (BOOL)shouldBeginEditing;
- (void)setupStyleCollectionView;
- (void)updateFlowLayoutItemSize;
- (long long)numberOfItemsPerRow;
- (id)updatedProviderItem;
- (BOOL)isEmojiProviderItemType;
- (void)generateProviderItems;
- (double)editableAvatarViewEdgeLength;
- (double)textFieldFontSize;
- (double)fontSizeForContainerSize:;
- (id)editableAvatarViewController;
- (id)avatarViewSizeConstraint;
- (void)setAvatarViewSizeConstraint:;
- (id)avatarViewTopConstraint;
- (void)setAvatarViewTopConstraint:;
- (id)styleCollectionView;
- (void)setStyleCollectionView:;
- (id)variantProviderItems;
- (void)setVariantProviderItems:;
- (void)dismissTextKeyboardIfNeeded;
- (void)dismissEmojiKeyboardIfNeeded;
@end
