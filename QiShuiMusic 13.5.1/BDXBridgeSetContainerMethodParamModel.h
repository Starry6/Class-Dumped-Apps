@interface BDXBridgeSetContainerMethodParamModel : BDXBridgeModel
@property (nonatomic) BDXBridgeSetContainerPageUI pageUI;
@property (nonatomic) BDXBridgeSetContainerCommonInteraction commonInteraction;
@property (nonatomic) BDXBridgeSetContainerPageInteraction pageInteraction;
@property (nonatomic) BDXBridgeSetContainerPopupInteraction popupInteraction;
- (id)pageInteraction;
- (id)commonInteraction;
- (id)pageUI;
- (id)popupInteraction;
- (void)setCommonInteraction:;
- (void)setPageInteraction:;
- (void)setPageUI:;
- (void)setPopupInteraction:;
- (void).cxx_destruct;
+ (id)popupInteractionJSONTransformer;
+ (id)commonInteractionJSONTransformer;
+ (id)pageInteractionJSONTransformer;
+ (id)pageUIJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
