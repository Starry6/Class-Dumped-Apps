@interface IESIMGrowingTextView : UIView
@property (nonatomic) NSInteger maxNumberOfLines;
@property (nonatomic) NSInteger minNumberOfLines;
@property (nonatomic) NSInteger maxHeight;
@property (nonatomic) NSInteger minHeight;
@property (nonatomic) BOOL animateHeightChange;
@property (nonatomic) BOOL shouldCheckHeightChange;
@property (nonatomic) double animationDuration;
@property (nonatomic) NSString placeholder;
@property (nonatomic) UIColor placeholderColor;
@property (nonatomic) NSParagraphStyle placeholderParagraphStyle;
@property (nonatomic) UITextView internalTextView;
@property (nonatomic) NSObject<IESIMGrowingTextViewDelegate> delegate;
@property (nonatomic) NSString text;
@property (nonatomic) UIFont font;
@property (nonatomic) UIColor textColor;
@property (nonatomic) q textAlignment;
@property (nonatomic) {_NSRange=QQ} selectedRange;
@property (nonatomic) BOOL editable;
@property (nonatomic) Q dataDetectorTypes;
@property (nonatomic) q returnKeyType;
@property (nonatomic) q keyboardType;
@property (nonatomic) {UIEdgeInsets=dddd} contentInset;
@property (nonatomic) {UIEdgeInsets=dddd} textContainerInset;
@property (nonatomic) BOOL isScrollable;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) NSAttributedString attributedText;
@property (nonatomic) UITextRange markedTextRange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)resizeTextView:;
- (BOOL)animateHeightChange;
- (void)commonInitialiser;
- (void)commonInitialiser:;
- (void)growDidStop;
- (void)growingTextViewDidChange;
- (id)internalTextView;
- (int)maxNumberOfLines;
- (double)measureHeight;
- (int)minNumberOfLines;
- (id)placeholderParagraphStyle;
- (void)refreshHeight;
- (void)resetScrollPositionForIOS7;
- (void)setAnimateHeightChange:;
- (void)setContentInsetPurely:;
- (void)setInternalTextView:;
- (void)setMaxNumberOfLines:;
- (void)setMinNumberOfLines:;
- (void)setPlaceholderParagraphStyle:;
- (void)setShouldCheckHeightChange:;
- (BOOL)shouldCheckHeightChange;
- (void)setDataDetectorTypes:;
- (id)textContainerInset;
- (long long)keyboardType;
- (void)setPlaceholderColor:;
- (BOOL)enablesReturnKeyAutomatically;
- (void)setAttributedText:;
- (id)placeholderColor;
- (void)setBackgroundColor:;
- (void)setEnablesReturnKeyAutomatically:;
- (void)setKeyboardType:;
- (BOOL)hasText;
- (long long)returnKeyType;
- (unsigned long long)dataDetectorTypes;
- (double)animationDuration;
- (void)setReturnKeyType:;
- (void)layoutSubviews;
- (id)backgroundColor;
- (void)setText:;
- (void)setMaxHeight:;
- (id)placeholder;
- (void)setDelegate:;
- (BOOL)isFirstResponder;
- (void)setFont:;
- (id)selectedRange;
- (int)minHeight;
- (id)initWithCoder:;
- (void)setPlaceholder:;
- (BOOL)isEditable;
- (id)initWithFrame:;
- (void)setSelectedRange:;
- (BOOL)becomeFirstResponder;
- (id)contentInset;
- (void)setTextColor:;
- (id)delegate;
- (void)setAnimationDuration:;
- (id)sizeThatFits:;
- (void)scrollRangeToVisible:;
- (void).cxx_destruct;
- (id)font;
- (id)textColor;
- (BOOL)textView:shouldInteractWithTextAttachment:inRange:interaction:;
- (void)setTextContainerInset:;
- (void)setMinHeight:;
- (id)markedTextRange;
- (long long)textAlignment;
- (void)setTextAlignment:;
- (void)setContentInset:;
- (id)attributedText;
- (void)touchesEnded:withEvent:;
- (id)text;
- (int)maxHeight;
- (BOOL)resignFirstResponder;
- (void)setEditable:;
- (id)textDraggableView:itemsForDrag:;
- (void)textViewDidBeginEditing:;
- (BOOL)textViewShouldBeginEditing:;
- (BOOL)textViewShouldEndEditing:;
- (void)textViewDidEndEditing:;
- (void)textViewDidChange:;
- (void)textViewDidChangeSelection:;
- (BOOL)textView:shouldChangeTextInRange:replacementText:;
- (id)initWithFrame:textContainer:;
- (BOOL)isScrollable;
- (void)setIsScrollable:;
@end
