@interface UIKeyboardEmojiSplitCharacterPicker : UIKeyboardEmojiCollectionInputView
- (id)collectionView:layout:insetForSectionAtIndex:;
- (double)collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (void)dealloc;
- (void)setCategory:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)scrollViewWillEndDragging:withVelocity:targetContentOffset:;
- (id)category;
- (id)initWithFrame:keyplane:key:;
- (void)updateToCategory:;
- (double)snappedYOffsetForOffset:;
+ (BOOL)wantsScreenTraits;
@end
