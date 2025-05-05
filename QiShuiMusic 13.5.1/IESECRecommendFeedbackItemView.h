@interface IESECRecommendFeedbackItemView : UIView
@property (nonatomic) IESECRecommendFeedbackItemModel model;
@property (nonatomic) BOOL shouldShowBottomLine;
@property (nonatomic) IESECUIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView bottomLineView;
@property (nonatomic) IESECUIImageView arrowView;
- (void)setModel:isFirstPage:;
- (void)setShouldShowBottomLine:;
- (BOOL)shouldShowBottomLine;
- (id)model;
- (id)iconView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)arrowView;
- (id)bottomLineView;
+ (id)titleFont;
@end
