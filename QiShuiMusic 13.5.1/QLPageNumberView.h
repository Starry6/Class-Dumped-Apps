@interface QLPageNumberView : UIView
@property (nonatomic) q pageNumber;
@property (nonatomic) q pageCount;
- (void)sizeToFit;
- (void)drawRect:;
- (void)layoutSubviews;
- (long long)pageCount;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setPageCount:;
- (long long)pageNumber;
- (void)setPageNumber:;
- (id)_indexFormatter;
- (void)_updateString;
- (id)_copyMutablePathForRoundedRect:radius:inverted:;
@end
