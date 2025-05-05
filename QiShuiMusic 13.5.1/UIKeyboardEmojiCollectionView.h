@interface UIKeyboardEmojiCollectionView : UICollectionView
@property (nonatomic) BOOL isInSearchPopover;
@property (nonatomic) UIResponder hitTestResponder;
@property (nonatomic) UIKeyboardEmojiGraphicsTraits emojiGraphicsTraits;
- (void)touchesBegan:withEvent:;
- (void)layoutSubviews;
- (id)backgroundColor;
- (void).cxx_destruct;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesCancelled:withEvent:;
- (void)setHitTestResponder:;
- (id)emojiGraphicsTraits;
- (id)hitTestResponder;
- (id)initWithFrame:collectionViewLayout:emojiGraphicsTraits:;
- (double)_currentScreenScale;
- (id)closestCellForPoint:;
- (void)disableConflictingGestureRecognizers;
- (void)enableConflictingGestureRecognizers;
- (BOOL)isInSearchPopover;
- (void)setIsInSearchPopover:;
@end
