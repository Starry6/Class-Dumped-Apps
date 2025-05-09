@interface UIDynamicCaret : UIImageView
@property (nonatomic) _UIDynamicCaretInput inputView;
@property (nonatomic) _UIDynamicCaretAlternatives alternativesView;
@property (nonatomic) _UIDynamicCaretNoContentView noContentView;
@property (nonatomic) _UIDynamicCaretHelpLabel helpLabel;
@property (nonatomic) TIKeyboardCandidateResultSet candidateSet;
@property (nonatomic) BOOL isActive;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isExtendedList;
- (void)setUIKeyboardCandidateListDelegate:;
- (void)didMoveToSuperview;
- (void)touchesBegan:withEvent:;
- (void)setFrame:;
- (void)layoutSubviews;
- (void)setIsActive:;
- (void)setInputView:;
- (void)showCandidateInForwardDirection:granularity:;
- (id)backgroundImage;
- (id)initWithFrame:;
- (void)setCandidates:inlineText:inlineRect:maxX:layout:;
- (BOOL)isFloatingList;
- (void)candidateAcceptedAtIndex:;
- (BOOL)hasCandidates;
- (BOOL)showCandidate:;
- (unsigned long long)selectedSortIndex;
- (void).cxx_destruct;
- (void)showCandidateAtIndex:;
- (unsigned long long)currentIndex;
- (id)currentCandidate;
- (id)inputView;
- (id)statisticsIdentifier;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (id)keyboardBehaviors;
- (BOOL)isActive;
- (void)touchesCancelled:withEvent:;
- (BOOL)isDeleteCandidate:;
- (id)candidateSet;
- (void)setCandidateSet:;
- (void)setDocumentHasContent:;
- (void)displayAlternatives:;
- (void)alternativeTappedAtIndex:;
- (id)alternativesView;
- (void)setAlternativesView:;
- (id)noContentView;
- (void)setNoContentView:;
- (id)helpLabel;
- (void)setHelpLabel:;
@end
