@interface IESECStoreHeaderLiveGiftView : UIView
@property (nonatomic) UIView<IESHYContainerProtocol> hybridContainer;
- (id)hybridContainer;
- (void)createHybridContainerWithUrl:data:metaInfo:;
- (void)handleViewVisibilityChange:;
- (void)setHybridContainer:;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
