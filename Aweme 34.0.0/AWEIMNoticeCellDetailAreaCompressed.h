@interface AWEIMNoticeCellDetailAreaCompressed : AWEIMNoticeCellDetailArea
@property (nonatomic) AWEIMNoticeCellSeparateLineCompressed topSeparateLineCompressed;
- (void)configWithModel:;
- (void)addSubviews;
- (id)topSeparateLine;
- (id)topSeparateLineCompressed;
- (void)setTopSeparateLineCompressed:;
- (void).cxx_destruct;
- (void)addLayoutConstraints;
+ (double)topSeparateLineHeight;
+ (double)jumpIconWidth;
+ (double)marginWidth;
+ (double)bottomAreaHeight;
+ (double)totalHeight;
@end
