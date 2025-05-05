@interface UIKeyboardFlipTransitionView : UIKeyboardSplitTransitionView
@property (nonatomic) BOOL showingFrontFace;
- (void)setFrame:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)rebuildTransitionForSplitStyleChange:;
- (void)rebuildFromKeyplane:toKeyplane:startToken:endToken:keyboardType:orientation:;
- (void)rebuildControlKeys:;
- (BOOL)transitionIsVisible;
- (id)defaultKeyboardImage;
- (id)splitKeyboardImage;
- (void)_flipToFront:animated:;
- (void)setShowingFrontFace:;
- (void)rebuildBackgroundTransition;
- (void)rebuildTransition;
- (void)rebuildControlSlicesForKeyName:;
- (void)rebuildShiftSlices;
- (void)rebuildReturnSlices;
- (void)updateMoreIntlKey:asStart:withRect:showIntl:showDictKey:;
- (void)rebuildMoreIntlKeys;
- (void)_delayedUpdateTransition;
- (void)updateTransition;
- (BOOL)isShowingFrontFace;
@end
