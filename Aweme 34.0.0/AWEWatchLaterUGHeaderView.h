@interface AWEWatchLaterUGHeaderView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView leftJXIconView;
@property (nonatomic) UILabel ugLabel;
@property (nonatomic) UIImageView arrowIconView;
@property (nonatomic) UIImageView closeIconView;
@property (nonatomic) AWEWatchLaterDiversionInfo watchLaterDivisionInfo;
@property (nonatomic) <AWEWatchLaterUGHeaderViewDelegate> delegate;
- (void)p_setupUI;
- (void)setWatchLaterDivisionInfo:;
- (id)ugLabel;
- (id)watchLaterDivisionInfo;
- (id)leftJXIconView;
- (id)arrowIconView;
- (id)closeIconView;
- (void)trackerUGHeaderViewClickAction;
- (void)setDivisionInfo:;
- (void)trackerUGHeaderViewShowAction;
- (void)setLeftJXIconView:;
- (void)setUgLabel:;
- (void)setArrowIconView:;
- (void)setCloseIconView:;
- (id)init;
- (id)delegate;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)updateHeaderView;
@end
