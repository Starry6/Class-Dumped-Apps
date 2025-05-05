@interface BDXBridgeSetContainerPageInteraction : BDXBridgeModel
@property (nonatomic) q disableSwipe;
@property (nonatomic) q navBtnType;
- (long long)disableSwipe;
- (long long)navBtnType;
- (void)setDisableSwipe:;
- (void)setNavBtnType:;
+ (id)navBtnTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
