@interface CPHitTest : NSObject
- (id)page;
- (void)dealloc;
- (id)initWithPage:;
- (id)column:;
- (id)paragraph:;
- (id)paragraphNear:;
- (id)layoutArea:;
- (unsigned int)columnsAt:;
- (id)textLine:;
- (id)objectAtPoint:;
- (long long)compareByReadingOrder:to:;
- (void)findClickableObjects:;
- (BOOL)hitTestGraphicObject:point:;
- (BOOL)hitTestParagraph:point:;
- (id)findBestMatch:atPoint:;
- (id)findObjectIn:at:count:;
@end
