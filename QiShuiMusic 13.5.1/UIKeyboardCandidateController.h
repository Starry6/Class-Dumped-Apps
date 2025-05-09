@interface UIKeyboardCandidateController : NSObject
@property (nonatomic) <UIKeyboardCandidateListDelegate> candidateListDelegate;
@property (nonatomic) TUICandidateView bar;
@property (nonatomic) TUICandidateView key;
@property (nonatomic) TUICandidateView inlineView;
@property (nonatomic) UIKeyboardCandidateInlineFloatingView inlineViewContainer;
@property (nonatomic) NSMutableArray activeViews;
@property (nonatomic) UIKeyboardCandidateViewConfiguration barConfiguration;
@property (nonatomic) UIKeyboardCandidateViewConfiguration inlineConfiguration;
@property (nonatomic) UIKeyboardCandidateViewConfiguration keyConfiguration;
@property (nonatomic) UIKeyboardCandidateViewState barState;
@property (nonatomic) UIKeyboardCandidateViewState extendedBarState;
@property (nonatomic) UIKeyboardCandidateViewState extendedScrolledBarState;
@property (nonatomic) UIKeyboardCandidateViewState inlineViewState;
@property (nonatomic) UIKeyboardCandidateViewState extendedInlineViewState;
@property (nonatomic) UIKeyboardCandidateViewState keyState;
@property (nonatomic) UIKeyboardCandidateViewState extendedKeyState;
@property (nonatomic) double additionalExtendedBarBackdropOffset;
@property (nonatomic) TIKeyboardCandidate currentCandidate;
@property (nonatomic) BOOL darkKeyboard;
@property (nonatomic) BOOL darkKeyboardChanged;
@property (nonatomic) NSDictionary opacities;
@property (nonatomic) double singleSlottedCellMargin;
@property (nonatomic) UIPanGestureRecognizer panGestureRecognizer;
@property (nonatomic) UIViewPropertyAnimator animator;
@property (nonatomic) UIKBRenderConfig renderConfig;
@property (nonatomic) <UIKeyboardCandidateControllerDelegate> delegate;
@property (nonatomic) TIKeyboardCandidateResultSet candidateResultSet;
@property (nonatomic) NSString inlineText;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} inlineRect;
@property (nonatomic) BOOL inlineRectIsVertical;
@property (nonatomic) BOOL adjustForLeftHandBias;
@property (nonatomic) BOOL reuseArrowButtonToExpandAssistantBarItems;
@property (nonatomic) double splitGap;
@property (nonatomic) UIView candidateBar;
@property (nonatomic) UIView inlineCandidateView;
@property (nonatomic) UIView candidateKey;
@property (nonatomic) BOOL barIsExtended;
@property (nonatomic) BOOL inlineViewIsExtended;
@property (nonatomic) BOOL isExtended;
@property (nonatomic) q activeCandidateViewType;
@property (nonatomic) NSArray activeCandidateViews;
@property (nonatomic) UIKBScreenTraits screenTraits;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)keyState;
- (id)animator;
- (double)splitGap;
- (void)collapse;
- (void)acceptSelectedCandidate;
- (void)dimKeys:;
- (void)candidateView:didAcceptCandidate:atIndexPath:inGridType:generateFeedback:;
- (BOOL)showCandidate:animated:scrollPosition:;
- (BOOL)isExtendedList;
- (id)init;
- (void)removeInlineView;
- (void)clearCurrentCandidate;
- (void)setBarConfiguration:;
- (void)updateStates;
- (void)toggleBarExtendedWithAnimator:;
- (id)inlineViewState;
- (BOOL)handleNumberKey:;
- (void)dealloc;
- (void)setUIKeyboardCandidateListDelegate:;
- (long long)rowForCandidateAtIndex:;
- (id)newCandidateKeyWithFrame:configuration:;
- (void)setReuseArrowButtonToExpandAssistantBarItems:;
- (id)renderConfig;
- (void)setCandidateListDelegate:;
- (void)setAdjustForLeftHandBias:;
- (double)candidateBarWidth;
- (void)setBar:;
- (id)inlineView;
- (void)setExtendedBarState:;
- (id)candidateKey;
- (void)showCandidateInForwardDirection:granularity:;
- (id)candidates;
- (id)panGestureRecognizer;
- (void)setDelegate:;
- (id)key;
- (void)setSplitGap:;
- (void)setInlineText:;
- (BOOL)reuseArrowButtonToExpandAssistantBarItems;
- (void)setInlineConfiguration:;
- (void)setAnimator:;
- (void)updateConfigurations;
- (id)barState;
- (id)candidateListDelegate;
- (void)setRenderConfig:;
- (id)firstNonEmptyActiveCandidateView;
- (void)panGestureRecognizerAction:;
- (void)toggleInlineViewExtendedAnimated:completion:;
- (void)setOpacities:;
- (void)updateStatesForKey;
- (double)additionalExtendedBarBackdropOffset;
- (id)candidateBarEdgeInsetsForOrientation:;
- (void)_setRenderConfig:;
- (BOOL)darkKeyboardChanged;
- (BOOL)handleTabKeyWithShift:;
- (id)secureCandidateRenderTraits;
- (id)screenTraits;
- (void)updateOpacitiesToState:;
- (id)inlineRect;
- (void)setCandidateResultSet:;
- (void)setExtendedKeyState:;
- (BOOL)darkKeyboard;
- (void)setDarkKeyboardChanged:;
- (id)maximumSizeForInlineView;
- (void)setActiveCandidateViewType:;
- (long long)viewOffsetForCandidateAtIndex:;
- (id)candidateBar;
- (void)setKey:;
- (void)setInlineRectIsVertical:;
- (BOOL)barIsExtended;
- (id)inlineViewContainer;
- (void)setCandidates:inlineText:inlineRect:maxX:layout:;
- (double)candidateBarHeight;
- (id)candidateResultSet;
- (void)setExtendedInlineViewState:;
- (BOOL)shouldShowDisambiguationCandidates;
- (void)setActiveViews:;
- (void)setCurrentCandidate:;
- (BOOL)isFloatingList;
- (void)setupPanGestureRecognizerIfNeeded;
- (double)rowHeightForBarForOrientation:;
- (void)candidateViewNeedsToExpand:;
- (void)setExtendedScrolledBarState:;
- (void)candidateAcceptedAtIndex:;
- (BOOL)hasCandidates;
- (void)setInlineViewState:;
- (void)setPanGestureRecognizer:;
- (id)delegate;
- (void)setInlineRect:;
- (BOOL)showCandidate:;
- (unsigned long long)selectedSortIndex;
- (void)setBarState:;
- (void)candidateViewDidTapArrowButton:;
- (id)activeViews;
- (void)setupAnimatorWithCurve:;
- (id)extendedKeyState;
- (void).cxx_destruct;
- (BOOL)hasCandidateInForwardDirection:granularity:;
- (void)showCandidateAtIndex:;
- (id)snapshot;
- (void)candidateViewDidTapInlineText:;
- (unsigned long long)currentIndex;
- (long long)candidateViewTypeForView:;
- (long long)layoutDirectionForCurrentInputMode;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (void)candidateView:didAcceptCandidate:atIndexPath:inGridType:;
- (void)setInlineView:;
- (void)showCandidateAtIndex:animated:scrollPosition:;
- (void)revealHiddenCandidates;
- (BOOL)inlineRectIsVertical;
- (double)singleSlottedCellMargin;
- (id)extendedInlineViewState;
- (void)setDarkKeyboard:;
- (void)updateStyles;
- (void)candidateViewWillBeginDragging:;
- (id)currentCandidate;
- (id)inlineCandidateView;
- (void)candidateViewSelectionDidChange:inGridType:;
- (BOOL)inlineViewIsExtended;
- (id)bar;
- (void)updateStatesForBar;
- (id)inlineText;
- (void)setScreenTraits:;
- (id)loadCandidateBar;
- (void)setInlineViewContainer:;
- (id)keyConfiguration;
- (BOOL)shouldShowSortControlForConfiguration:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)extendKeyboardBackdropHeight:;
- (id)opacities;
- (BOOL)adjustForLeftHandBias;
- (void)candidatesDidChange;
- (BOOL)shouldShowDisambiguationCandidatesInExtendedView;
- (void)updateStatesForInlineView;
- (BOOL)isKeyExtended;
- (void)setAdditionalExtendedBarBackdropOffset:;
- (void)toggleCandidateView:animated:completion:;
- (BOOL)isExtended;
- (void)toggleKeyViewExtendedAnimated:completion:;
- (id)statisticsIdentifier;
- (id)barConfiguration;
- (void)toggleBarExtended;
- (void)setKeyConfiguration:;
- (id)loadInlineCandidateView;
- (id)extendedScrolledBarState;
- (void)setKeyState:;
- (id)inlineConfiguration;
- (id)keyboardBehaviors;
- (void)toggleBarExtendedUnanimated;
- (void)resetSortControlIndexAfterCandidatesChanged;
- (void)loadDefaultStates;
- (id)activeCandidateViews;
- (void)setCandidates:type:inlineText:inlineRect:maxX:layout:;
- (id)candidateAtIndex:;
- (id)extendedBarState;
- (long long)activeCandidateViewType;
- (double)candidateBarHeightForOrientation:;
- (void)setSingleSlottedCellMargin:;
+ (id)sharedInstance;
+ (double)candidateViewAnimationDuration;
@end
