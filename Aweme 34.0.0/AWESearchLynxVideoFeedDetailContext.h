@interface AWESearchLynxVideoFeedDetailContext : AWESearchVideoFeedDetailContext
@property (nonatomic) <AWESearchLynxContainerDataSourceProtocol> lynxContainer;
@property (nonatomic) <AWEModernFeedCellControllerProtocol><AWEGeneralDynamicCellControllerProtocol> generalLynxCellController;
@property (nonatomic) NSDictionary lynxParams;
- (id)lynxContainer;
- (id)lynxParams;
- (void)setLynxContainer:;
- (void)setLynxParams:;
- (id)generalLynxCellController;
- (void)setGeneralLynxCellController:;
- (void).cxx_destruct;
@end
