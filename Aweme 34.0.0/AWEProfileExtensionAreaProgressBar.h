@interface AWEProfileExtensionAreaProgressBar : UIView
@property (nonatomic) double height;
@property (nonatomic) double indicatorBarLength;
@property (nonatomic) double backgroundBarLength;
@property (nonatomic) UIView indicatorBar;
- (id)indicatorBar;
- (void)setIndicatorBar:;
- (void)setIndicatorBarLength:;
- (double)indicatorBarLength;
- (void)updateIndicatorLength:;
- (void)updateIndicatorOffset:;
- (void)updateBackgroundBarColor:;
- (void)updateIndicatorColor:;
- (double)backgroundBarLength;
- (void)setBackgroundBarLength:;
- (id)init;
- (void)setHeight:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (double)height;
- (void)setupSubviews;
@end
