@interface PDFPageViewAnnotationController : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)activeAnnotation;
- (void)_didRotatePageNotification:;
- (id)initWithPDFPageView:;
- (void)addControlForAnnotation:;
- (void)removeControlForAnnotation:;
- (void)_rotateActiveAnnotation;
- (void)addMarkupWithStyle:forIndexSet:;
- (id)markupAnnotationsForIndexSet:;
- (void)_addPopupForAnnotation:;
- (id)_getIndexSetIntersectionBetween:and:;
- (BOOL)_indexSet:touchesIndexSet:;
- (id)_markupAnnotationsForExactIndexSet:;
- (void)_propagateNotesForIndexSet:;
@end
