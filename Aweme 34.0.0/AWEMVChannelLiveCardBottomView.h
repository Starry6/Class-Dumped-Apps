@interface AWEMVChannelLiveCardBottomView : UIView
@property (nonatomic) UILabel descLabel;
@property (nonatomic) AWEMVChannelVSLeftBottomView leftBottomView;
- (id)descLabel;
- (void)setDescLabel:;
- (void)updateWithAwemeModel:;
- (void)setupSubViews;
- (id)leftBottomView;
- (void)updateBottomFrameWithModel:;
- (void)setLeftBottomView:;
- (id)init;
- (void).cxx_destruct;
@end
