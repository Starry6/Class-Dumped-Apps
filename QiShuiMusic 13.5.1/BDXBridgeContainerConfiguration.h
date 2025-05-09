@interface BDXBridgeContainerConfiguration : NSObject
@property (nonatomic) NSString containerID;
@property (nonatomic) BOOL onlyUseStandardMethods;
@property (nonatomic) NSSet allowsMethodNames;
@property (nonatomic) BOOL shouldUseAnniePro;
@property (nonatomic) NSString apAppId;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) UIView cardView;
@property (nonatomic) UIView kitView;
@property (nonatomic) NSObject kitBridgeWrapper;
@property (nonatomic) BOOL shouldExecutorsApplyCustomOrder;
- (id)apAppId;
- (id)kitView;
- (BOOL)shouldExecutorsApplyCustomOrder;
- (id)allowsMethodNames;
- (id)kitBridgeWrapper;
- (BOOL)onlyUseStandardMethods;
- (void)setAllowsMethodNames:;
- (void)setApAppId:;
- (void)setKitBridgeWrapper:;
- (void)setKitView:;
- (void)setOnlyUseStandardMethods:;
- (void)setShouldExecutorsApplyCustomOrder:;
- (void)setShouldUseAnniePro:;
- (BOOL)shouldUseAnniePro;
- (id)containerID;
- (void)setContainerID:;
- (id)viewController;
- (void).cxx_destruct;
- (id)cardView;
- (void)setCardView:;
@end
