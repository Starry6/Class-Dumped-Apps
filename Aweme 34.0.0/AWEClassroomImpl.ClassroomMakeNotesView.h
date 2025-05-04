@interface AWEClassroomImpl.ClassroomMakeNotesView : UIView
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (void)keyboardWillHideWithNotification:;
- (void)keyboardWillShowWithNotification:;
- (void)keyboardWillChangeFrameWithNotification:;
- (BOOL)textView:shouldChangeTextInRange:replacementText:;
- (void)textViewDidChange:;
- (void)handleBackButton;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)handleDoneButton;
@end
