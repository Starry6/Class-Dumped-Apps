@interface AWEMVExtendedConsumptionBaseElement : AWEBaseElement
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEMVExtendedConsumptionModel extendedConsumptionModel;
@property (nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> interactionContext;
@property (nonatomic) @? clickAction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)clickAction;
- (void)setClickAction:;
- (id)extendedConsumptionModel;
- (BOOL)canAppearWithModel:context:;
- (void)clickActionWithModel:;
- (void)setExtendedConsumptionModel:;
- (id)priority;
- (void)setData:;
- (void).cxx_destruct;
- (id)interactionContext;
- (void)setInteractionContext:;
@end
