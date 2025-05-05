@interface CSJDynamicTextView : CSJDynamicAbstractView
@property (nonatomic) UILabel label;
@property (nonatomic) CSJHorizontalScrollTextView horizontalScrollTextView;
@property (nonatomic) CSJVerticalScrollTextView verticalScrollTextView;
- (id)horizontalScrollTextView;
- (void)pbu_add_horizontal;
- (void)pbu_add_label;
- (void)pbu_add_vertical;
- (void)pbu_clear;
- (void)setHorizontalScrollTextView:;
- (void)setVerticalScrollTextView:;
- (id)subComponentFrameWithNeedUserPadding:;
- (void)updateWithDarkMode:;
- (id)verticalScrollTextView;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (void)render;
@end
