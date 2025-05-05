@interface IESECWinFeedBaseResponseView : UIView
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) double startOffset;
@property (nonatomic) @? tapInView;
- (void)setTapInView:;
- (id)tapInView;
- (void)setScrollView:;
- (BOOL)pointInside:withEvent:;
- (void)setStartOffset:;
- (id)scrollView;
- (void).cxx_destruct;
- (double)startOffset;
@end
