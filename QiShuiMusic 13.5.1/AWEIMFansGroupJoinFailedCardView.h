@interface AWEIMFansGroupJoinFailedCardView : UIView
@property (nonatomic) UIView maskView;
@property (nonatomic) UIView cardView;
@property (nonatomic) UIImageView failedIcon;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIView taskContainerView;
@property (nonatomic) UIButton confirmBtn;
@property (nonatomic) UIButton closeBtn;
@property (nonatomic) NSDictionary trackerParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)closeBtn;
- (id)confirmBtn;
- (id)failedIcon;
- (void)maskViewTapAction:;
- (void)p_configCardViewCorners;
- (void)p_dismiss;
- (void)p_hide;
- (void)p_show;
- (void)setCloseBtn:;
- (void)setConfirmBtn:;
- (void)setFailedIcon:;
- (void)setTaskContainerView:;
- (void)setTrackerParams:;
- (id)taskContainerView;
- (id)trackerParams;
- (id)maskView;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (id)initWithInfo:;
- (void).cxx_destruct;
- (void)setMaskView:;
- (id)titleLabel;
- (id)cardView;
- (void)setCardView:;
- (id)subTitleLabel;
- (void)setSubTitleLabel:;
+ (void)showWithInfo:;
@end
