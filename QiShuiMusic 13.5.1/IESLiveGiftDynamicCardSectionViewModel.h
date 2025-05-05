@interface IESLiveGiftDynamicCardSectionViewModel : IESLiveRefactGiftPanelSectionViewModel
@property (nonatomic) IESLiveGiftDynamicCardSectionModel model;
@property (nonatomic) @? cardModelChanged;
@property (nonatomic) IESLiveGiftPanelDataSharing giftPanelDataSharing;
- (void)bindAction;
- (id)cardModelChanged;
- (id)createSectionView;
- (unsigned long long)currentDynamicCardTypeWithGiftItem:;
- (id)generateModelWithGiftItem:;
- (id)giftPanelDataSharing;
- (id)initWithGiftPanelDataSharing:;
- (void)p_updateGiftDynamicCardInfoWithGiftItem:;
- (void)setCardModelChanged:;
- (void)setGiftPanelDataSharing:;
- (void)updateWithGiftItem:;
- (id)model;
- (void)setModel:;
- (void).cxx_destruct;
@end
