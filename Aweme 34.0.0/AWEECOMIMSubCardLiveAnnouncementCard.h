@interface AWEECOMIMSubCardLiveAnnouncementCard : UIView
@property (nonatomic) UIControl containerView;
@property (nonatomic) UILabel liveTimeLabel;
@property (nonatomic) UILabel liveTextLabel;
@property (nonatomic) NSString cardUrl;
@property (nonatomic) @? actionBlock;
- (id)cardUrl;
- (void)setCardUrl:;
- (void)tapCard;
- (id)liveTimeLabel;
- (id)liveTextLabel;
- (void)setLiveTimeLabel:;
- (void)setLiveTextLabel:;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)updateWithData:;
- (void)setupUI;
- (void)setActionBlock:;
- (id)actionBlock;
+ (double)designHeight;
@end
