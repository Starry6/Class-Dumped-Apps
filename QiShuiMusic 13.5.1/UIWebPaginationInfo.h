@interface UIWebPaginationInfo : NSObject
@property (nonatomic) Q pageCount;
@property (nonatomic) double lastPageHeight;
@property (nonatomic) UIWebDocumentView webDocumentView;
- (id)layoutSize;
- (void)dealloc;
- (double)scaleFactor;
- (unsigned long long)pageCount;
- (void).cxx_destruct;
- (id)documentView;
- (id)pageRects;
- (id)initWithDocumentView:scaleFactor:layoutSize:pageRects:;
- (double)lastPageHeight;
- (id)sizeForPageAtIndex:;
- (id)webDocumentView;
- (void)setWebDocumentView:;
@end
