@interface AWEFeedPlayableAppInfoView : UIView
@property (nonatomic) UILabel valueLabel;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) AWERatingView starView;
@property (nonatomic) AWEFeedPlayableAppInfoModel model;
- (id)starView;
- (void)setStarView:;
- (void)configValueViewWithModel:;
- (void)configStarViewWithModel:;
- (id)textLabel;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (void)setValueLabel:;
- (id)valueLabel;
@end
