@interface CPGuideFinder : NSObject
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (id)leftGuides;
- (id)rightGuides;
- (id)gutters;
- (id)initWithContentZone:;
- (double)medianFontSizeOfFirstCharacter;
- (double)medianFontSizeOfLastCharacter;
- (void)getWordEdges;
- (BOOL)addStripTo:bottom:left:top:right:;
- (void)setAlignForWordWithExtent:stripArray:stripMax:;
- (void)subdivideStripInto:from:to:borderedBy:ofCount:crossedBy:ofCount:;
- (void)subdivideGutterFrom:to:;
- (void)subdivideLeftGuideAt:;
- (void)subdivideRightGuideAt:;
- (void)findWordEdgeClusters;
- (void)findGutters;
- (void)findGuides;
- (void)func:and:and:and:;
- (void)splitTextLinesAtBorderWords;
- (void)splitTextLinesBetweenBorderWords;
- (void)splitTextLines;
- (void)markTextLines;
- (BOOL)hasGutters;
- (BOOL)hasLeftGuides;
- (BOOL)hasRightGuides;
+ (BOOL)guideSeparates:from:;
+ (BOOL)gutterSeparates:from:;
+ (void)reclusterPreservingAlignment:;
+ (void)reclusterBetweenGuides:;
@end
