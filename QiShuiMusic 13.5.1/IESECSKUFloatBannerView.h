@interface IESECSKUFloatBannerView : UIView
@property (nonatomic) IESECSKUFloatBannerModel model;
@property (nonatomic) <IESECSKUFloatBannerViewDelegate> delegate;
@property (nonatomic) UIView bgView;
- (void)configUI;
- (id)initWithModel:delegate:;
- (id)model;
- (void)setModel:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)bgView;
- (void)setBgView:;
@end
