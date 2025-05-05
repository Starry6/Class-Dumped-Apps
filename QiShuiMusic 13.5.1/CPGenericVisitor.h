@interface CPGenericVisitor : NSObject
- (void)visitChunk:;
- (void)visitShape:;
- (void)visitCompoundGraphic:;
- (void)visitImage:;
- (void)visitPage:;
- (void)visitRegion:;
- (void)visitTextLine:;
- (void)visitParagraph:;
- (void)visitColumn:;
- (void)visitLayoutArea:;
- (void)visitTextBox:;
- (void)visitImageRegion:;
- (void)visitShapeRegion:;
- (void)visitZone:;
- (void)visitBody:;
@end
