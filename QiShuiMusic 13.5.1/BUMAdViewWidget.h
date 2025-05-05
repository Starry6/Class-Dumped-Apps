@interface BUMAdViewWidget : NSObject
@property (nonatomic) UIView widgetView;
@property (nonatomic) Q widgetViewType;
@property (nonatomic) UIView adView;
@property (nonatomic) Q couponType;
@property (nonatomic) @? barrageBlock;
@property (nonatomic) @? suspensionBlock;
@property (nonatomic) @? flipBlock;
- (id)suspensionBlock;
- (id)adView;
- (id)barrageBlock;
- (unsigned long long)couponType;
- (id)flipBlock;
- (id)renderWithFrame:;
- (void)setAdView:;
- (void)setBarrageBlock:;
- (void)setCouponType:;
- (void)setFlipBlock:;
- (void)setSuspensionBlock:;
- (void)setWidgetViewType:;
- (unsigned long long)widgetViewType;
- (void)setWidgetView:;
- (id)widgetView;
- (void).cxx_destruct;
@end
