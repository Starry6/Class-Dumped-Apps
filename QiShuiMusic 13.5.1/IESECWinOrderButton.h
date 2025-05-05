@interface IESECWinOrderButton : IESECButton
@property (nonatomic) NSString orderDetailURL;
@property (nonatomic) IESECTracker tracker;
- (id)getBtmIDWithHost:;
- (void)orderAction;
- (id)orderDetailURL;
- (void)setOrderDetailURL:;
- (void)trackClick;
- (void)trackShow;
- (void)updateWithObject:;
- (void)setTracker:;
- (id)tracker;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
