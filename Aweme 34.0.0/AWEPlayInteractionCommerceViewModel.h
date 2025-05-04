@interface AWEPlayInteractionCommerceViewModel : AWEPlayInteractionBaseViewModel
@property (nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onPoiCardClicked:;
- (void)router_onPoiLabelClicked:enterMethod:;
- (void)onPoiCardClicked_IMP:;
- (void)interactor_onPoiLabelClicked:;
@end
