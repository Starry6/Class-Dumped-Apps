@interface AWEAdLandPageMannorCardManager : HTSService
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) BDMannorManager mannorManager;
@property (nonatomic) UIView containerView;
@property (nonatomic) BOOL isHalfLandPage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxBridges;
- (void)p_setupMannorCard;
- (id)mannorManager;
- (id)p_mannorContext;
- (BOOL)isHalfLandPage;
- (void)setupCardWithModel:containerView:;
- (void)setIsHalfLandPage:;
- (void)mannorComponentDowngrade:errorMessage:componentType:;
- (void)setMannorManager:;
- (void)setModel:;
- (id)containerView;
- (id)model;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)componentView;
+ (BOOL)shouldShowAdMannorCard:;
+ (id)createNewManagerWithModel:;
@end
