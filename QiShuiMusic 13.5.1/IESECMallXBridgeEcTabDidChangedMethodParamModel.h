@interface IESECMallXBridgeEcTabDidChangedMethodParamModel : BDXBridgeModel
@property (nonatomic) NSNumber tabClickTime;
@property (nonatomic) BDXBridgeEcTabDidChangedCurrentTab currentTab;
@property (nonatomic) BDXBridgeEcTabDidChangedPreviousTab previousTab;
- (void)setPreviousTab:;
- (id)previousTab;
- (void)setTabClickTime:;
- (id)tabClickTime;
- (void).cxx_destruct;
- (id)currentTab;
- (void)setCurrentTab:;
+ (id)currentTabJSONTransformer;
+ (id)previousTabJSONTransformer;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
