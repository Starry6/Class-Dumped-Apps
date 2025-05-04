@interface AWEIMTaskNetErrorView : UIView
@property (nonatomic) UIImageView netErrorImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) AWEIMTaskNetErrorRetryButton retryButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_updateUI;
- (void)p_updateLayout;
- (id)netErrorImageView;
- (void)setNetErrorImageView:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)setRetryButton:;
- (id)retryButton;
@end
