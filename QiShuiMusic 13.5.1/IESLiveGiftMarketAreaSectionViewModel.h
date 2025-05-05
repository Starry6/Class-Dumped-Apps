@interface IESLiveGiftMarketAreaSectionViewModel : IESLiveRefactGiftPanelSectionViewModel
@property (nonatomic) IESLiveGiftPanelDataSharing giftPanelDataSharing;
@property (nonatomic) @? marketModelChanged;
@property (nonatomic) BOOL marketingAreaDisplaying;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindAction;
- (id)createSectionView;
- (void)didSetAttachingDIContext;
- (id)generateCurrentGiftMarketAreaModel;
- (id)generateModelWithGiftItem:;
- (id)giftPanelDataSharing;
- (void)gpe_didGiftExtraInfoUpdate:;
- (id)initWithGiftPanelDataSharing:;
- (id)marketModelChanged;
- (BOOL)marketingAreaDisplaying;
- (void)p_updateGiftMarketingInfoWithGiftItem:;
- (void)setGiftPanelDataSharing:;
- (void)setMarketModelChanged:;
- (void)setMarketingAreaDisplaying:;
- (void).cxx_destruct;
@end
