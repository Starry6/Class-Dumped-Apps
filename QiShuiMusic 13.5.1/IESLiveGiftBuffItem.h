@interface IESLiveGiftBuffItem : IESLiveRefactGiftPanelSectionViewModel
@property (nonatomic) BOOL hasOpenTraySchemaUrl;
@property (nonatomic) NSDictionary cardSettingConfig;
@property (nonatomic) IESLiveGiftPanelDataSharing giftPanelDataSharing;
@property (nonatomic) NSArray cardsConfigs;
@property (nonatomic) q selectedIndex;
@property (nonatomic) HTSLiveGiftMarketingInfo giftMarketingInfo;
@property (nonatomic) BOOL buffCardSectionViewDisplaying;
@property (nonatomic) @? selectedIndexChanged;
@property (nonatomic) @? cardsConfigsChanged;
@property (nonatomic) @? marketingInfoChanged;
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
- (void)gpe_onSelectedWithItem:changed:;
- (BOOL)buffCardSectionViewDisplaying;
- (BOOL)canManualSelectCard;
- (id)cardSettingConfig;
- (id)cardsConfigs;
- (id)cardsConfigsChanged;
- (void)didSetAttachingDIContext;
- (id)giftMarketingInfo;
- (id)giftPanelDataSharing;
- (void)gpe_didGiftExtraInfoUpdate:;
- (BOOL)hasOpenTraySchemaUrl;
- (id)initWithGiftPanelDataSharing:;
- (BOOL)marketMixAreaDisplaying;
- (id)marketingInfoChanged;
- (id)p_createRemainTimeStringWithExpiredAt:;
- (void)p_refreshCardConfigWithItem:;
- (void)p_refreshgiftMarketingInfoWithItem:;
- (BOOL)p_shouldShimmerWithBuffGiftId:;
- (void)selectCard:withIndex:;
- (id)selectedIndexChanged;
- (void)setBuffCardSectionViewDisplaying:;
- (void)setCardSettingConfig:;
- (void)setCardsConfigs:;
- (void)setCardsConfigsChanged:;
- (void)setGiftMarketingInfo:;
- (void)setGiftPanelDataSharing:;
- (void)setHasOpenTraySchemaUrl:;
- (void)setMarketingInfoChanged:;
- (void)setSelectedIndexChanged:;
- (void)showLockedToastWithIndex:;
- (void)trackCardClickWithIndex:unlock:select:;
- (void)trackCardShowingWithIndex:;
- (void)updateBuffCardIndex2ChosenTypeWithIndex:chosenType:;
- (void)updateWithGiftItem:;
- (BOOL)enable;
- (long long)selectedIndex;
- (void).cxx_destruct;
- (void)setEnable:;
- (Class)cellClass;
- (void)setSelectedIndex:;
- (id)cellSize;
- (void)setCellSize:;
- (id)reaction;
- (void)setReaction:;
- (void)setCellClass:;
@end
