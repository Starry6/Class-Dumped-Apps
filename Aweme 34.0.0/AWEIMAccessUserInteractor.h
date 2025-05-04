@interface AWEIMAccessUserInteractor : AWEIMComponentBase
@property (nonatomic) BOOL isUserRefreshed;
@property (nonatomic) UIView<IESIMLoadingViewProtocol> loadingView;
@property (nonatomic) NSMutableArray modelArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setModelArray:;
- (id)modelArray;
- (void)componentDidMounted:;
- (void)didFetchFullDetailUser:fullDetailUser:;
- (void)didFetchUser:;
- (void)executeBlockAfterObtainingUserWithModel:;
- (BOOL)isUserRefreshed;
- (void)setIsUserRefreshed:;
- (void)setLoadingView:;
- (id)loadingView;
- (void).cxx_destruct;
- (id)parentViewController;
+ (BOOL)canCreateComponentWithContext:;
@end
