@interface NSCoreTypesetter : NSTypesetter
@property (nonatomic) NSDictionary _extraLineFragmentAttributes;
@property (nonatomic) q layoutOrientation;
@property (nonatomic) BOOL allowsFontOverridingTextAttachmentVerticalMetrics;
@property (nonatomic) {_NSRange=QQ} characterRange;
@property (nonatomic) {CGSize=dd} textContainerSize;
@property (nonatomic) q maximumNumberOfLines;
@property (nonatomic) q containerBreakMode;
@property (nonatomic) BOOL enforcesMinimumTextLineFragment;
@property (nonatomic) BOOL wantsExtraLineFragment;
@property (nonatomic) @? laidOutLineFragment;
@property (nonatomic) <NSCoreTypesetterDelegate> delegate;
@property (nonatomic) BOOL usesDefaultHyphenation;
@property (nonatomic) BOOL allowsFontSubstitutionAffectingVerticalMetrics;
@property (nonatomic) BOOL limitsLayoutForSuspiciousContents;
@property (nonatomic) BOOL beginningOfDocument;
@property (nonatomic) @? validateLineBreakIndex;
- (BOOL)isBeginningOfDocument;
- (void)setTextContainerSize:;
- (id)init;
- (void)dealloc;
- (BOOL)wantsExtraLineFragment;
- (long long)maximumNumberOfLines;
- (void)setDelegate:;
- (int)_NSFastDrawString:length:attributes:paragraphStyle:typesetterBehavior:lineBreakMode:rect:padding:graphicsContext:baselineRendering:usesFontLeading:usesScreenFont:scrollable:syncAlignment:mirrored:boundingRectPointer:baselineOffsetPointer:drawingContext:;
- (void)setMaximumNumberOfLines:;
- (BOOL)enforcesMinimumTextLineFragment;
- (long long)_getFirstOverflowTabStopIndexInLineRef:range:string:paragraphStyle:availableWidth:offset:;
- (void)setLayoutOrientation:;
- (void)setLimitsLayoutForSuspiciousContents:;
- (void)setCharacterRange:;
- (void)endLine;
- (BOOL)isSimpleRectangularTextContainerForStartingCharacterAtIndex:;
- (id)_stringDrawingCoreTextEngineWithOriginalString:rect:padding:graphicsContext:forceClipping:attributes:stringDrawingOptions:drawingContext:stringDrawingInterface:;
- (id)laidOutLineFragment;
- (id)textContainerSize;
- (id)_createLineRefForParentLineRef:range:availableWidth:offset:paragraphArbitrator:lineBreakMode:hyphenated:forcedClusterBreak:;
- (BOOL)limitsLayoutForSuspiciousContents;
- (id)softHyphen;
- (BOOL)usesDefaultHyphenation;
- (void)layout;
- (BOOL)allowsFontOverridingTextAttachmentVerticalMetrics;
- (id)characterRange;
- (void)setContainerBreakMode:;
- (id)delegate;
- (id)validateLineBreakIndex;
- (long long)layoutOrientation;
- (void)set_extraLineFragmentAttributes:;
- (id)_extraLineFragmentAttributes;
- (BOOL)allowsFontSubstitutionAffectingVerticalMetrics;
- (void)setEnforcesMinimumTextLineFragment:;
- (long long)containerBreakMode;
- (void)setLaidOutLineFragment:;
- (void)setValidateLineBreakIndex:;
- (id)lineFragmentRectForProposedRect:atIndex:writingDirection:remainingRect:;
- (id)_getLineMetricsForRange:attributes:attributedString:applySpacing:usesSystemFontLeading:usesNegativeFontLeading:;
- (void)layoutWithYOrigin:;
- (void)setWantsExtraLineFragment:;
- (void)beginLine;
- (void)setAllowsFontSubstitutionAffectingVerticalMetrics:;
- (id)_paragraphStyleFromAttributes:;
- (id)_createLayoutLineFragmentStartingWithCharacterIndex:proposedLineFragmentRect:baseLineRef:range:paragraphStyle:paragraphArbitrator:lineBreakMode:hasAttachments:lineFragmentRect:glyphOrigin:hyphenated:forcedClusterBreak:;
- (void)setBeginningOfDocument:;
- (void)setAllowsFontOverridingTextAttachmentVerticalMetrics:;
- (void)setUsesDefaultHyphenation:;
+ (void)_minMaxPositionsForLineFragmentWithParagraphStyle:baseWidth:writingDirection:isBeginningOfParagraph:minPosition:maxPosition:;
+ (void)_lineMetricsForAttributes:typesetterBehavior:usesFontLeading:applySpacings:usesSystemFontLeading:usesNegativeFontLeading:layoutOrientation:lineHeight:baselineOffset:spacing:;
+ (BOOL)_allowsFontOverridingTextAttachmentVerticalMetricsForStringDrawing;
+ (void)_maximumAscentAndDescentForRuns:ascender:descender:;
@end
