@interface AWETopBlendingView : UIView
@property (nonatomic) NSArray segments;
@property (nonatomic) NSMutableArray items;
- (void)updateSegments;
- (void)prepareSegments;
- (void)drawSegments;
- (long long)compareFloat:and:;
- (void)addItem:toZOrderedArray:;
- (id)segments;
- (id)items;
- (void)setItems:;
- (void)setSegments:;
- (void)removeItem:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)addItem:;
@end
