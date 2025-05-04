@interface AWEDemaciaBaseElement : AWEBaseElement
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) BOOL appearBeforeScreenCast;
@property (nonatomic) UIViewController<AWEDemaciaContainerProtocol> viewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (void)setHide:;
- (id)viewControllerShouldConformProtocolList;
- (id)contextShouldConformProtocolList;
- (void)checkIsElementValid;
- (BOOL)appearBeforeScreenCast;
- (void)setAppearBeforeScreenCast:;
- (void)setModel:;
- (BOOL)isShowing;
- (id)viewController;
- (id)model;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
- (id)context;
@end
