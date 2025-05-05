@interface CPGraphicObject : CPChunk
@property (nonatomic) I clipIndex;
@property (nonatomic) CPParagraph anchoringParagraph;
- (void)setUser:;
- (id)init;
- (void)dealloc;
- (BOOL)isNarrow;
- (id)user;
- (BOOL)isVisible;
- (id)renderedBounds;
- (unsigned short)unicode;
- (BOOL)canBeContainer;
- (BOOL)isIndivisible;
- (BOOL)isInZoneBorder;
- (void)setIsInZoneBorder:;
- (int)zoneGraphicType;
- (void)setZoneGraphicType:;
- (void)setAnchoringTextLine:;
- (id)anchoringTextLine;
- (unsigned int)clipIndex;
- (void)setClipIndex:;
- (id)anchoringParagraph;
- (void)setAnchoringParagraph:;
@end
