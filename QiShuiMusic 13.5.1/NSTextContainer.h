@interface NSTextContainer : NSObject
@property (nonatomic) NSLayoutManager layoutManager;
@property (nonatomic) NSTextLayoutManager textLayoutManager;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) NSArray exclusionPaths;
@property (nonatomic) q lineBreakMode;
@property (nonatomic) double lineFragmentPadding;
@property (nonatomic) Q maximumNumberOfLines;
@property (nonatomic) BOOL simpleRectangularTextContainer;
@property (nonatomic) BOOL widthTracksTextView;
@property (nonatomic) BOOL heightTracksTextView;
@property (nonatomic) q layoutOrientation;
- (void)_commonInit;
- (id)textView;
- (id)textLayoutManager;
- (id)linkTextAttributes;
- (id)attributesForExtraLineFragment;
- (id)layoutManager;
- (double)lineFragmentPadding;
- (void)invalidateTextContainerOrigin;
- (id)textContainerOrigin;
- (id)init;
- (void)dealloc;
- (void)setLineBreakMode:;
- (id)initWithSize:;
- (unsigned long long)maximumNumberOfLines;
- (void)setContainerSize:;
- (id)defaultParagraphStyle;
- (id)lineFragmentRectForProposedRect:remainingRect:;
- (void)setMaximumNumberOfLines:;
- (void)setLayoutOrientation:;
- (id)initWithCoder:;
- (long long)lineBreakMode;
- (void)setTextLayoutManager:;
- (void)encodeWithCoder:;
- (void)setTextView:;
- (long long)layoutOrientation;
- (id)description;
- (void)setLineFragmentPadding:;
- (id)containerSize;
- (id)lineFragmentRectForProposedRect:atIndex:writingDirection:remainingRect:;
- (void)setSize:;
- (id)copyWithZone:;
- (id)size;
- (BOOL)containsPoint:;
- (void)setAttributesForExtraLineFragment:;
- (BOOL)heightTracksTextView;
- (void)setHeightTracksTextView:;
- (void)setWidthTracksTextView:;
- (BOOL)widthTracksTextView;
- (void)coordinateAccess:;
- (void)setLayoutManager:;
- (id)renderingColorForDocumentColor:;
- (id)textContainerInsetsForView_iOS:;
- (void)replaceLayoutManager:;
- (id)selectedTextAttributes;
- (id)initWithContainerSize:;
- (BOOL)_hasLayoutManager:;
- (BOOL)_textViewAllowsMigratingToLayoutManager;
- (id)exclusionPaths;
- (void)setExclusionPaths:;
- (BOOL)isSimpleRectangularTextContainer;
- (id)markedTextAttributesAtCharacterIndex:effectiveRange:;
- (void)setMinimumLineFragmentWidth:;
- (double)minimumLineFragmentWidth;
- (BOOL)_containerObservesTextViewFrameChanges;
- (void)_resizeAccordingToTextView:;
- (void)_containerTextViewFrameChanged:;
- (id)textContainerInsetsForView:;
+ (BOOL)supportsSecureCoding;
@end
