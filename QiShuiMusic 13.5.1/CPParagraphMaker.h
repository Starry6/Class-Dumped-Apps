@interface CPParagraphMaker : NSObject
- (void)dealloc;
- (id)paragraphs;
- (BOOL)firstWordOf:fits:indent:;
- (BOOL)isGraphicBetween:and:;
- (BOOL)line:isDirectlyBelow:;
- (BOOL)line:isBelow:;
- (int)linesThatOverlapLineAt:between:and:from:;
- (int)indexOfUniqueLineBelow:from:;
- (BOOL)spacingOf:and:and:is:;
- (unsigned long long)alignmentOf:and:;
- (BOOL)styleOf:differsFromStyleOf:;
- (unsigned long long)alignmentOf:and:and:;
- (BOOL)line:isAlignedWith:;
- (BOOL)fitsBelow:alignment:spacing:from:;
- (id)newInitialParagraphIn:;
- (int)paragraph:splits:;
- (void)addLinesTo:;
- (void)addCompoundedShapesOn:to:;
- (void)addIntersectingParagraph:;
- (void)makeParagraphsIn:;
+ (BOOL)line:alignsWith:;
@end
