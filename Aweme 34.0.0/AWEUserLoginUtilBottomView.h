@interface AWEUserLoginUtilBottomView : AWEUserComplexIconWithDescView
@property (nonatomic) NSArray onShowThirdPlatforms;
@property (nonatomic) BOOL isInEmailPage;
@property (nonatomic) @? otherClickAction;
@property (nonatomic) @? loginClick;
- (void)setupSubview;
- (id)onShowThirdPlatforms;
- (id)initWithInEmailPage:;
- (void)setLoginClick:;
- (void)setOtherClickAction:;
- (id)otherClickAction;
- (void)setIsInEmailPage:;
- (BOOL)showFindAccountTextStyle;
- (void)addNewBottomView;
- (void)configModelArray;
- (void)setOnShowThirdPlatforms:;
- (id)loginClick;
- (BOOL)isInEmailPage;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end
