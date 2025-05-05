@interface IESECWinVideoDurationView : UIView
@property (nonatomic) UIImageView playIconView;
@property (nonatomic) UILabel durationLabel;
- (id)playIconView;
- (void)setPlayIconView:;
- (void)updateDurationViewWithDurationText:backgroundColor:;
- (void)updateDurationViewWithVideoObject:;
- (id)init;
- (void).cxx_destruct;
- (id)durationLabel;
- (void)setDurationLabel:;
- (void)setUpConstraints;
@end
