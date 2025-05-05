@interface IESLiveUserCardHonorItemView : UIView
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) IESLiveHonorWallElement element;
@property (nonatomic) UIView subView;
@property (nonatomic) IESLiveUserCardStore store;
@property (nonatomic) UIView upContainer;
@property (nonatomic) UIView bottomContainer;
- (id)registerSubView;
- (void)setUpContainer:;
- (id)subView;
- (id)initWithElement:withUsercardStore:withSubView:;
- (void)setSubView:;
- (void)setupBackgroundColor;
- (void)setupBackgroundImage;
- (id)upContainer;
- (id)element;
- (void)setStore:;
- (void)layoutSubviews;
- (id)gradientLayer;
- (void).cxx_destruct;
- (id)store;
- (void)setElement:;
- (void)setGradientLayer:;
- (void)setupUI;
- (id)bottomContainer;
- (void)setBottomContainer:;
@end
