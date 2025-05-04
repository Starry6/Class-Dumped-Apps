@interface AWEECShareTagStackView : UIStackView
@property (nonatomic) BOOL shouldHideOutBoundsView;
@property (nonatomic) double maxWidth;
- (BOOL)shouldHideOutBoundsView;
- (void)setShouldHideOutBoundsView:;
- (double)maxWidth;
- (void)setMaxWidth:;
- (void)layoutSubviews;
@end
