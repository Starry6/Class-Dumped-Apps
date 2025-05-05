@interface BUVideoAdView : UIView
@property (nonatomic) <BUVideoAdViewDelegate> delegate;
@property (nonatomic) UIViewController rootViewController;
@property (nonatomic) BOOL drawVideoClickEnable;
@property (nonatomic) q AdType;
@property (nonatomic) BUMaterialMeta materialMeta;
@property (nonatomic) BOOL supportAutoPlay;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)AdType;
- (BOOL)supportAutoPlay;
- (BOOL)drawVideoClickEnable;
- (id)materialMeta;
- (void)setDrawVideoClickEnable:;
- (void)setMaterialMeta:;
- (void)setSupportAutoPlay:;
- (id)init;
- (void)setRootViewController:;
- (id)rootViewController;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setAdType:;
- (id)initWithMaterial:;
@end
