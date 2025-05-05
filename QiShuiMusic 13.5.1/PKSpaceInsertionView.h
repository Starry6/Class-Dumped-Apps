@interface PKSpaceInsertionView : UIView
@property (nonatomic) Q insertionType;
@property (nonatomic) BOOL isDragging;
- (void)drawRect:;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)pointInside:withEvent:;
- (void).cxx_destruct;
- (BOOL)isDragging;
- (unsigned long long)insertionType;
- (void)setInsertionType:;
- (void)setIsDragging:;
- (id)initWithFrame:insertionType:path:handleLocation:scale:;
@end
