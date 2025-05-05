@interface BDXContainerContext : BDXSubContext
@property (nonatomic) BOOL disableResetNavigationHide;
@property (nonatomic) NSString bridgeNameSpace;
- (id)bridgeNameSpace;
- (BOOL)disableResetNavigationHide;
- (void)mergeContext:shouldOverride:;
- (void)setBridgeNameSpace:;
- (void)setDisableResetNavigationHide:;
- (id)init;
- (void).cxx_destruct;
@end
