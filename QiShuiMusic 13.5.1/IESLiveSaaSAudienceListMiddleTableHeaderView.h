@interface IESLiveSaaSAudienceListMiddleTableHeaderView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel rightLable;
- (void)hideRightLabel:;
- (id)rightLable;
- (void)setRightLable:;
- (void)updateLableWithStr:leftTextLength:;
- (void)updateStrWithLeftStr:rightStr:;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
@end
