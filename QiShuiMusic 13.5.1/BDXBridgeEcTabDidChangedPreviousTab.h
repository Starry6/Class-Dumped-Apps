@interface BDXBridgeEcTabDidChangedPreviousTab : BDXBridgeModel
@property (nonatomic) NSString tabId;
@property (nonatomic) NSNumber tabOrder;
- (void)setTabId:;
- (void)setTabOrder:;
- (id)tabId;
- (id)tabOrder;
- (void).cxx_destruct;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
