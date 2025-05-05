@interface WKPDFPageNumberIndicator : UIView
@property (nonatomic) I currentPageNumber;
@property (nonatomic) I pageCount;
- (void)dealloc;
- (unsigned int)pageCount;
- (void)hide;
- (void)show;
- (void)_updateLabel;
- (id)initWithFrame:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)hide:;
- (id).cxx_construct;
- (void)setPageCount:;
- (void)_makeRoundedCorners;
- (void)setCurrentPageNumber:;
- (void)moveToPoint:animated:;
- (unsigned int)currentPageNumber;
@end
