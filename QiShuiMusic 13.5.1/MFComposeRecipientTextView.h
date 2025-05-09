@interface MFComposeRecipientTextView : MFComposeHeaderView
@property (nonatomic) _MFAtomTextAttachment placeholderAttachment;
@property (nonatomic) UIView atomContainerView;
@property (nonatomic) <MFComposeRecipientTextViewDelegate> delegate;
@property (nonatomic) NSArray recipients;
@property (nonatomic) NSArray addresses;
@property (nonatomic) NSArray uncommentedAddresses;
@property (nonatomic) BOOL editable;
@property (nonatomic) BOOL separatorHidden;
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL indicatesUnsafeRecipientsWhenCollapsed;
@property (nonatomic) BOOL didIgnoreFirstResponderResign;
@property (nonatomic) q maxRecipients;
@property (nonatomic) NSString text;
@property (nonatomic) UITextView textView;
@property (nonatomic) UIButton addButton;
@property (nonatomic) BOOL showsAddButtonWhenExpanded;
@property (nonatomic) double offsetForRowWithTextField;
@property (nonatomic) Q numberOfRowsOfTextInField;
@property (nonatomic) UIFont baseFont;
@property (nonatomic) UIColor inactiveTextColor;
@property (nonatomic) UIColor typingTextColor;
@property (nonatomic) NSInteger hideLastAtomComma;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setProperty:;
- (void)layoutManager:didCompleteLayoutForTextContainer:atEnd:;
- (void)clearText;
- (id)textView;
- (id)recipients;
- (void)dealloc;
- (void)parentDidClose;
- (void)setFrame:;
- (void)layoutSubviews;
- (void)setBaseFont:;
- (void)setRecipients:;
- (void)setProperties:;
- (void)setDelegate:;
- (BOOL)hasContent;
- (BOOL)isFirstResponder;
- (void)setExpanded:;
- (void)setLabel:;
- (id)initWithFrame:;
- (BOOL)becomeFirstResponder;
- (void)addRecipient:;
- (id)delegate;
- (void)parentWillClose;
- (id)sizeThatFits:;
- (void)setBounds:;
- (void).cxx_destruct;
- (id)baseFont;
- (void)_tapGestureRecognized:;
- (BOOL)expanded;
- (id)text;
- (id)undoManager;
- (id)addresses;
- (void)removeRecipient:;
- (void)setEditable:;
- (BOOL)editable;
- (BOOL)isSeparatorHidden;
- (void)setSeparatorHidden:;
- (void)_longPressGestureRecognized:;
- (void)textViewDidChange:;
- (void)textViewDidChangeSelection:;
- (BOOL)textView:shouldChangeTextInRange:replacementText:;
- (void)addAddress:;
- (id)_baseAttributes;
- (void)setAddresses:;
- (unsigned long long)numberOfRowsOfTextInField;
- (void)setShowsAddButtonWhenExpanded:;
- (double)offsetForRowWithTextField;
- (id)atomViewForRecipient:;
- (id)atomViewsInRange:;
- (void)setInactiveTextColor:;
- (BOOL)finishEnteringRecipient;
- (id)addButton;
- (void)invalidateAtomPresentationOptions;
- (void)invalidateAtomPresentationOptionsForRecipient:;
- (unsigned long long)_atomPresentationOptionsForRecipient:;
- (void)atomTextViewDidBecomeFirstResponder:;
- (long long)maxRecipients;
- (void)setMaxRecipients:;
- (void)_removeAllRecipients;
- (void)reflow;
- (void)refreshPreferredContentSize;
- (BOOL)_shouldEmbedLabelInTextView;
- (void)_setTextViewIsCollapsed:animated:;
- (void)_addButtonTapped:;
- (void)selectComposeRecipientAtom:;
- (void)deselectComposeRecipientAtom:;
- (void)composeRecipientAtomShowPersonCard:;
- (void)composeRecipientAtomSelectPrevious:;
- (void)composeRecipientAtomSelectNext:;
- (void)dragEnteredAtPoint:;
- (void)dragMovedToPoint:;
- (void)dragExited;
- (void)dropItems:;
- (id)initWithFrame:dragDropDelegate:;
- (void)addRecipient:notify:;
- (void)_addRecord:identifier:;
- (void)addRecord:property:identifier:;
- (void)addRecipient:index:animate:;
- (void)addRecipient:index:animate:notify:;
- (void)_recipientsWereAdded:;
- (void)_didRemoveRecipient:;
- (BOOL)containsAddress:;
- (id)uncommentedAddresses;
- (void)setEditable:animated:;
- (void)_updateAddButtonVisibility;
- (BOOL)_hasUnsafeRecipients;
- (id)_userEnteredTextWithRange:;
- (double)textFieldOffsetForNumberOfRowsToScroll:numberOfRowsAboveField:;
- (void)_invalidateAtomPresentationOptionsCache;
- (id)inactiveTextColor;
- (BOOL)_useRightToLeftLayout;
- (id)_textContainerExclusionPathsWithAddButton:;
- (void)_recomputeTextContainerExclusionPaths;
- (void)_invalidateTextContainerExclusionPaths;
- (id)_rangeForComposeRecipientAtom:;
- (id)_atomViewAtCharacterIndex:;
- (void)_setValue:forAtomLayoutOption:withRecipient:;
- (id)_valueForAtomLayoutOption:withRecipient:;
- (void)_beginAtomViewAnimations;
- (BOOL)_shouldAnimateAtomViewChanges;
- (void)_resetSelectionState;
- (BOOL)_textViewContainsAtomizedRecipients;
- (id)_toString;
- (void)_ensureInactiveTextView;
- (void)_updateInactiveTextView;
- (id)_attributedStringWithAtomizedRecipients;
- (BOOL)_isTextViewCollapsed;
- (void)_ensureAddButton;
- (BOOL)_isAddButtonVisible;
- (void)_setAddButtonVisible:animated:;
- (BOOL)_canAddAdditionalAtoms;
- (id)_atomAttachmentForRecipient:;
- (void)_insertAtomAttachment:atCharacterIndex:;
- (void)_insertAtomAttachment:andReplaceCharactersInRange:;
- (void)_addAddressAtomSubview:;
- (void)_removeAddressAtomSubview:;
- (id)selectedAtoms;
- (unsigned long long)indexOfRecipientForInsertionAtPoint:;
- (void)atomTextViewDidResignFirstResponder:;
- (void)atomTextView:didChangeWritingDirection:;
- (BOOL)_delegateRespondsToSizeChange;
- (void)_notifyDelegateOfNewSize:;
- (void)_notifyDelegateOfSizeChange;
- (id)_placeholderAttachmentWithStaticWidth;
- (id)_placeholderAttachmentRange;
- (id)dragPreviewForDraggedItem:withContainer:;
- (BOOL)indicatesUnsafeRecipientsWhenCollapsed;
- (void)setIndicatesUnsafeRecipientsWhenCollapsed:;
- (BOOL)didIgnoreFirstResponderResign;
- (BOOL)showsAddButtonWhenExpanded;
- (id)typingTextColor;
- (void)setTypingTextColor:;
- (int)hideLastAtomComma;
- (void)setHideLastAtomComma:;
- (id)placeholderAttachment;
- (void)setPlaceholderAttachment:;
- (id)atomContainerView;
+ (id)defaultFont;
@end
