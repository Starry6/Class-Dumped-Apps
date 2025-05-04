@interface AWEVideoProductLimitedFreeReserveView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView reserveImageView;
@property (nonatomic) UILabel contentLabel;
- (void)makeConstraint;
- (void)setReserveViewWithURLArray:;
- (id)reserveImageView;
- (void)setReserveImageView:;
- (id)init;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)setContentText:;
@end
