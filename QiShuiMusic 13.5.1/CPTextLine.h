@interface CPTextLine : CPTextObject
@property (nonatomic) I leftSpacerIndex;
@property (nonatomic) I rightSpacerIndex;
@property (nonatomic) BOOL isListItem;
@property (nonatomic) I listSpacerIndex;
@property (nonatomic) BOOL lineBreakAfter;
- (id)anchor;
- (id)init;
- (id)lastWord;
- (void)dealloc;
- (void)dispose;
- (id)attributes;
- (void)finalize;
- (double)baseline;
- (id)properties;
- (double)rotationAngle;
- (unsigned int)wordCount;
- (id)bounds;
- (id)copyWithZone:;
- (BOOL)hasBeenProcessed;
- (void)setBaseline:;
- (long long)zOrder;
- (int)levels;
- (void)setLevels:;
- (BOOL)overlapsWith:;
- (int)align;
- (void)accept:;
- (void)fitBoundsToChildren;
- (void)translateObjectYBy:;
- (BOOL)isIndivisible;
- (BOOL)hasDropCap;
- (void)setCharSequence:;
- (id)charSequence;
- (id)wordArray;
- (id)wordArrayOfSize:;
- (id)boundsOfWordAtIndex:;
- (id)wordAtIndex:;
- (id)firstWord;
- (unsigned int)inlineCount;
- (id)inlineList;
- (void)anchorChunk:atWordIndex:;
- (BOOL)hasJustifiedAlignment;
- (BOOL)changesFontAt:;
- (id)newTextLineFromWordAt:lengthInWords:;
- (BOOL)removeTextLines:whereTrue:passing:;
- (BOOL)mapToWords:passing:;
- (BOOL)mapToWordsWithIndex:passing:;
- (BOOL)mapToWordPairs:passing:;
- (BOOL)mapToWordPairsWithIndex:passing:;
- (void)setHasBeenSplit:;
- (BOOL)hasBeenSplit;
- (void)setHasBeenProcessed:;
- (id)columnBreaks;
- (void)setColumnBreaks:;
- (void)setHasTabs:;
- (BOOL)hasTabs;
- (void)setTabsBefore:;
- (int)tabsBefore;
- (long long)baseLineAscending:;
- (long long)baseLineDescending:;
- (long long)baseLineDescendingApprox:;
- (BOOL)overlapsHorizontally:;
- (BOOL)hyphenated;
- (void)setBaselineToNull;
- (void)recomputeBaseline;
- (BOOL)styleIsUniform:styleFlags:;
- (BOOL)isMonospaced;
- (double)monospaceWidth;
- (unsigned int)spacesBeforeWordAtIndex:;
- (void)setSpaces:beforeWordAtIndex:;
- (void)recomputeLevels;
- (float)maximumLetterGap;
- (void)setMaximumLetterGap:;
- (float)maximumWordGap;
- (void)setMaximumWordGap:;
- (BOOL)irregular;
- (void)setIrregular:;
- (long long)topIsAbove:;
- (double)medianFontSize;
- (id)normalizedBounds;
- (unsigned int)leftSpacerIndex;
- (void)setLeftSpacerIndex:;
- (unsigned int)rightSpacerIndex;
- (void)setRightSpacerIndex:;
- (BOOL)isListItem;
- (void)setIsListItem:;
- (unsigned int)listSpacerIndex;
- (void)setListSpacerIndex:;
- (BOOL)lineBreakAfter;
- (void)setLineBreakAfter:;
@end
