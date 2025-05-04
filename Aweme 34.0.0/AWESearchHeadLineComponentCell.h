@interface AWESearchHeadLineComponentCell : AWESearchPOIDefaultComponentCell
@property (nonatomic) UIView leftSelectionLine;
- (void)configWithComponentModel:filterManager:;
- (void)configDisplayUIForDefaultStyleWithModel:;
- (void)configDisplayUIForSelectedStyleWithModel:;
- (void)configDisplayUIForSelectingStyleWithModel:;
- (id)leftSelectionLine;
- (void)setLeftSelectionLine:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
+ (id)identifier;
@end
