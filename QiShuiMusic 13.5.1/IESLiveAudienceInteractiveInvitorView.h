@interface IESLiveAudienceInteractiveInvitorView : UIView
@property (nonatomic) UILabel firstLabel;
@property (nonatomic) UILabel invitorLabel;
@property (nonatomic) UILabel secondLabel;
- (id)invitorLabel;
- (void)setInvitorLabel:;
- (void)updateWithInvitor:;
- (void)setupConstraints;
- (id)init;
- (void).cxx_destruct;
- (void)setupViews;
- (id)firstLabel;
- (void)setFirstLabel:;
- (id)secondLabel;
- (void)setSecondLabel:;
@end
