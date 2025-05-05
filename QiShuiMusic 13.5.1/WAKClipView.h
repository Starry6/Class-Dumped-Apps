@interface WAKClipView : WAKView
@property (nonatomic) WAKView documentView;
@property (nonatomic) BOOL copiesOnScroll;
- (void)dealloc;
- (id)initWithFrame:;
- (id)documentView;
- (id)documentVisibleRect;
- (void)_setDocumentView:;
- (BOOL)copiesOnScroll;
- (void)setCopiesOnScroll:;
@end
