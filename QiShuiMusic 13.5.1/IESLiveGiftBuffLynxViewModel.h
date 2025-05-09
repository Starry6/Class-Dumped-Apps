@interface IESLiveGiftBuffLynxViewModel : IESLiveRefactGiftPanelSectionViewModel
@property (nonatomic) IESLiveGiftPanelDataSharing giftPanelDataSharing;
@property (nonatomic) NSMutableArray giftBuffInfosArray;
@property (nonatomic) HTSLiveGiftBuffInfo cuerrentBuffInfos;
@property (nonatomic) HTSLiveGiftMarketingInfo giftMarketingInfo;
@property (nonatomic) BOOL buffCardSectionViewDisplaying;
@property (nonatomic) @? marketingInfoChanged;
@property (nonatomic) @? observeCurrentSelectCardBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) # cellClass;
@property (nonatomic) {CGSize=dd} cellSize;
@property (nonatomic) BOOL enable;
@property (nonatomic) RACCommand didSelectItemCommand;
@property (nonatomic) <IESLiveGiftPanelReaction> reaction;
- (void)bindDataRefresh;
- (BOOL)buffCardSectionViewDisplaying;
- (id)createSectionView;
- (id)cuerrentBuffInfos;
- (void)didSetAttachingDIContext;
- (id)giftBuffInfosArray;
- (id)giftMarketingInfo;
- (id)giftPanelDataSharing;
- (void)gpe_didGiftExtraInfoUpdate:;
- (id)initWithGiftPanelDataSharing:;
- (BOOL)marketMixAreaDisplaying;
- (id)marketingInfoChanged;
- (id)observeCurrentSelectCardBlock;
- (void)selectCardWithBuffLevel:;
- (void)setBuffCardSectionViewDisplaying:;
- (void)setCuerrentBuffInfos:;
- (void)setGiftBuffInfosArray:;
- (void)setGiftMarketingInfo:;
- (void)setGiftPanelDataSharing:;
- (void)setMarketingInfoChanged:;
- (void)setObserveCurrentSelectCardBlock:;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:;
- (Class)cellClass;
- (id)cellSize;
- (void)setCellSize:;
- (id)reaction;
- (void)setReaction:;
- (void)setCellClass:;
@end
