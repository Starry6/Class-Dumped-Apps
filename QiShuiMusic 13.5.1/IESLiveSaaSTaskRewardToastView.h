@interface IESLiveSaaSTaskRewardToastView : UIView
@property (nonatomic) UIView container;
@property (nonatomic) UIView titleView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel rightSideSubtitleLabel;
@property (nonatomic) UILabel detailLabel;
@property (nonatomic) UILabel hintLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rightSideSubtitleLabel;
- (void)setRightSideSubtitleLabel:;
- (void)setupWithTitle:rightSideSubtitle:detailText:hintText:;
- (void)startToastAnimation;
- (void)setContainer:;
- (void)setTitleView:;
- (void)setTitleLabel:;
- (id)container;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleView;
- (id)titleLabel;
- (id)detailLabel;
- (void)setDetailLabel:;
- (id)hintLabel;
- (void)setHintLabel:;
@end
