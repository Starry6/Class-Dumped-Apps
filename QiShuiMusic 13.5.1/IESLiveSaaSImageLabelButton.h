@interface IESLiveSaaSImageLabelButton : UIButton
@property (nonatomic) UILabel dummyLabel;
@property (nonatomic) BOOL markLayoutComponentsIfNeeded;
@property (nonatomic) Q style;
@property (nonatomic) double space;
@property (nonatomic) BOOL enlargeImageWhenHighlighted;
- (void)setEnlargeImageWhenHighlighted:;
- (void)addDummyLabelIfNeeded;
- (id)dummyLabel;
- (BOOL)enlargeImageWhenHighlighted;
- (void)layoutComponentsIfNeeded;
- (BOOL)markLayoutComponentsIfNeeded;
- (void)setDummyLabel:;
- (void)setMarkLayoutComponentsIfNeeded:;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setStyle:;
- (id)hitTest:withEvent:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (unsigned long long)style;
- (double)space;
- (void)layoutComponents;
- (void)setSpace:;
+ (id)buttonWithInsetStyle:space:;
+ (id)buttonWithInsetStyle:space:shadow:;
@end
