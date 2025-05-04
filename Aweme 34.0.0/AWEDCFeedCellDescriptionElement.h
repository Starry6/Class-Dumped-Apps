@interface AWEDCFeedCellDescriptionElement : AWEDCFeedBaseCellElement
@property (nonatomic) UILabel descriptionLabel;
- (void)configWithModel:context:;
- (void)setupSubViews;
- (void)themeDidChange:;
- (void)calculateLabelHeightIfNeeded:context:;
- (void)setDescriptionLabel:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)reset;
- (id)descriptionLabel;
+ (BOOL)canShowWithAwemeModel:context:;
+ (double)heightWithCellWidth:awemeModel:context:;
+ (long long)elementStyle;
+ (id)titleWithAwemeModel:context:;
+ (double)descriptionLabelFontSizeWithContext:;
+ (id)descriptionLabelColorWithContext:;
@end
