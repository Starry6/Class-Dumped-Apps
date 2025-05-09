@interface AWEIMTaskPlatformDetailCardDetailCellHeaderView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView stateBackGroundView;
@property (nonatomic) UILabel stateLabel;
@property (nonatomic) UIImageView titleIconImageView;
@property (nonatomic) UILabel cardTitleLabel;
@property (nonatomic) UILabel cardTagLabel;
@property (nonatomic) UIView unreadDotView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderModel:context:;
- (id)cardTitleLabel;
- (void)setCardTitleLabel:;
- (void)setUnreadDotView:;
- (id)unreadDotView;
- (id)attrWithHighlightStr:fulltext:;
- (void)setStateBackGroundView:;
- (id)stateBackGroundView;
- (void)setCardTagLabel:;
- (id)cardTagLabel;
- (id)textColorForStatus:;
- (id)textForStatus:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
- (void)setTitleIconImageView:;
- (id)titleIconImageView;
- (void)setStateLabel:;
- (id)stateLabel;
@end
