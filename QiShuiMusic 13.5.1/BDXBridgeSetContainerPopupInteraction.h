@interface BDXBridgeSetContainerPopupInteraction : BDXBridgeModel
@property (nonatomic) q disableMaskClickClose;
@property (nonatomic) q enablePullDownClose;
- (long long)disableMaskClickClose;
- (long long)enablePullDownClose;
- (void)setDisableMaskClickClose:;
- (void)setEnablePullDownClose:;
+ (id)JSONKeyPathsByPropertyKey;
@end
