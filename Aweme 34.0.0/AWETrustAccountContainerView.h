@interface AWETrustAccountContainerView : UIView
@property (nonatomic) NSArray trustUsers;
@property (nonatomic) NSMutableArray subTrustViews;
@property (nonatomic) @? clickLogin;
- (void)stopLoadingWithError:;
- (void)startLoadingWithIndex:;
- (id)initWithTrustUsers:isHalfScreen:;
- (void)setClickLogin:;
- (void)setTrustUsers:;
- (void)setupUIWithHalfScreen:;
- (id)trustUsers;
- (id)clickLogin;
- (id)subTrustViews;
- (void)changeLoginButtonEnable:;
- (void)setSubTrustViews:;
- (void).cxx_destruct;
+ (double)containerHeightWithUserCount:isHalfScreen:;
@end
