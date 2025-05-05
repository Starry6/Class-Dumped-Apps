@interface PDFDetectedForm : NSObject
@property (nonatomic) Q count;
@property (nonatomic) q displayBox;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id).cxx_construct;
- (long long)displayBox;
- (id)initWithPage:displayBox:;
- (id)detectedFormFieldNearestPoint:;
- (id)detectedFormFieldAtIndex:;
- (void)_insertFieldRect:ofKind:;
- (id)_collectGlyphEntriesInDisplayList:medianGlyphHeight:;
- (long long)_classifyRect:;
@end
