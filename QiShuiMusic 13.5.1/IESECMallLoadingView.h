@interface IESECMallLoadingView : UIView
@property (nonatomic) UIView<IESECUILoadingViewProtocol> loadingView;
@property (nonatomic) UIImageView logoImageView;
@property (nonatomic) BOOL canShowMask;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCanShowMask:;
- (BOOL)canShowMask;
- (void)dismiss;
- (void)show;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)logoImageView;
- (void)setLogoImageView:;
- (id)loadingView;
- (void)setLoadingView:;
@end
