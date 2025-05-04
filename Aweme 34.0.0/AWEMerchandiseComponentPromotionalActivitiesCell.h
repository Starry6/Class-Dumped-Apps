@interface AWEMerchandiseComponentPromotionalActivitiesCell : AWEMerchandiseComponentBaseCell
@property (nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel filterComponentModel;
@property (nonatomic) UILabel headTextLabel;
@property (nonatomic) UILabel tailTextLabel;
@property (nonatomic) UIStackView stackView;
- (void)configWithComponentModel:filterManager:;
- (id)headTextLabel;
- (id)filterComponentModel;
- (id)tailTextLabel;
- (void)configDisplayUIForDefaultStyleWithModel:;
- (void)configDisplayUIForSelectedStyleWithModel:;
- (void)configDisplayUIForSelectingStyleWithModel:;
- (void)setHeadTextLabel:;
- (void)setTailTextLabel:;
- (void)setFilterComponentModel:;
- (id)stackView;
- (void)setStackView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
+ (BOOL)isSelectWithModel:filterManager:;
+ (double)widthWithComponentModel:filterManager:;
+ (double)titleWidthWithModel:filterManager:text:;
+ (id)identifier;
@end
