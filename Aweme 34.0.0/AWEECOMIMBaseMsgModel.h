@interface AWEECOMIMBaseMsgModel : NSObject
@property (nonatomic) BOOL isRead;
@property (nonatomic) BOOL isAssistant;
@property (nonatomic) NSString pigeonShopId;
@property (nonatomic) AWEECOMShopDetailModel curShopItem;
@property (nonatomic) <AWEECOMIMPaasConversationBridgeProtocol> curConversation;
@property (nonatomic) AWEECOMIMFootDescSourceUIModel footDescSourceModel;
@property (nonatomic) NSString baseMsgExtType;
@property (nonatomic) NSString baseMsgCardType;
@property (nonatomic) NSString baseMsgTemplateType;
@property (nonatomic) NSString baseMsgCardEntityType;
@property (nonatomic) NSString baseMsgCardSourceScene;
@property (nonatomic) <AWEECOMIMPaasMessageBridgeProtocol> message;
@property (nonatomic) BOOL isSendByMe;
@property (nonatomic) BOOL needRecalled;
@property (nonatomic) BOOL isRobot;
@property (nonatomic) BOOL isRiskControlledLocal;
@property (nonatomic) q messageSentStatus;
@property (nonatomic) NSString pigeonBizType;
@property (nonatomic) @? onClickRecall;
@property (nonatomic) @? onClickSkuConsult;
@property (nonatomic) @? onTrackMsgDetailDisplay;
@property (nonatomic) @? onClickReply;
@property (nonatomic) @? onPreviewTextBlock;
@property (nonatomic) YYTextLayout footTextLayout;
@property (nonatomic) NSMutableAttributedString displayRiskContent;
@property (nonatomic) YYTextLayout riskTextLayout;
@property (nonatomic) @? footDescSwitchHumanClickBlock;
@property (nonatomic) @? riskHighLightClickBlock;
@property (nonatomic) AWEECOMIMDetailDynamicCardManager dynamicCardManager;
@property (nonatomic) BOOL isAggregation;
@property (nonatomic) q aggregationStyle;
@property (nonatomic) double localModelCreateTime;
@property (nonatomic) @? messageStatusUpdateBlock;
@property (nonatomic) UIImage cacheAvatarImage;
@property (nonatomic) BOOL shouldShowFoldedButton;
@property (nonatomic) BOOL isDisplayFullContent;
@property (nonatomic) double fullContentHeight;
@property (nonatomic) BOOL shouldUseModelCellHeight;
@property (nonatomic) <AWEECOMIMMsgModelDataSource> dataSource;
@property (nonatomic) NSString sceneStr;
@property (nonatomic) BOOL isShowAiCornerIcon;
@property (nonatomic) NSString aiCornerIconURLString;
@property (nonatomic) BOOL isMessageSending;
@property (nonatomic) AWEECOMIMChatDetailMessageCacheManager cardStateManager;
@property (nonatomic) Q footDescWhiteOperation;
@property (nonatomic) Q footDescBlackOperation;
@property (nonatomic) BOOL enableNewFootDesc;
@property (nonatomic) BOOL needDisplayRobotTip;
@property (nonatomic) NSString needDisplayRobotReqId;
@property (nonatomic) BOOL shouldShowSwitchToHuman;
@property (nonatomic) BOOL preRobtMsgNeedShowSwitchToHuman;
@property (nonatomic) AWEECOMIMFootDescActionUIModel footDescActionModel;
@property (nonatomic) Q msgListType;
@property (nonatomic) NSString msgListTypeString;
@property (nonatomic) Q combinationWithTopType;
@property (nonatomic) NSString combinationWithTopID;
@property (nonatomic) AWEECOMIMPageTrackUtil pageTrackUtil;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPigeonShopId:;
- (id)pigeonBizType;
- (id)pigeonShopId;
- (double)baseCellTopAndBottomPaddingHeight;
- (BOOL)isSendByMe;
- (BOOL)shouldShowFoldedButton;
- (void)setIsDisplayFullContent:;
- (void)configFootTextLayoutWithMessage:;
- (void)_configRiskTextLayoutWithMessage:;
- (void)setCurConversation:;
- (id)curConversation;
- (void)setMessageSentStatus:;
- (void)setIsRiskControlledLocal:;
- (BOOL)isDisplayFullContent;
- (double)footContentHeight;
- (double)fullContentHeight;
- (double)currentDisplayCellTopPadding;
- (double)currentDisplayCellBottomPadding;
- (id)displayRiskContent;
- (id)riskTextLayout;
- (void)setShouldShowFoldedButton:;
- (long long)messageSentStatus;
- (id)cardEventCommonTrackParams;
- (id)msgCommonTrackParams;
- (void)trackMsgDisplayWithEventName:;
- (double)currentDisplayHeight;
- (double)currentBubbleViewDisplayHeight;
- (double)designMaxHeight;
- (BOOL)hasRealMessageBody;
- (BOOL)checkIfSupportRecall;
- (id)removeRecallItem:;
- (id)popMenuItems;
- (BOOL)isMessageSending;
- (void)transferSchemaToSkip:andTrackButtonTap:materialName:extParams:;
- (void)trackMsgDetailDisplay;
- (void)setIsSendByMe:;
- (BOOL)needRecalled;
- (void)setNeedRecalled:;
- (BOOL)isRiskControlledLocal;
- (id)onClickRecall;
- (void)setOnClickRecall:;
- (id)footTextLayout;
- (void)setFootTextLayout:;
- (void)setDisplayRiskContent:;
- (void)setRiskTextLayout:;
- (id)riskHighLightClickBlock;
- (void)setRiskHighLightClickBlock:;
- (void)setIsAggregation:;
- (void)setAggregationStyle:;
- (double)localModelCreateTime;
- (void)setLocalModelCreateTime:;
- (id)messageStatusUpdateBlock;
- (void)setMessageStatusUpdateBlock:;
- (id)cacheAvatarImage;
- (void)setCacheAvatarImage:;
- (void)setFullContentHeight:;
- (BOOL)shouldUseModelCellHeight;
- (void)setShouldUseModelCellHeight:;
- (id)sceneStr;
- (void)setSceneStr:;
- (BOOL)isAssistant;
- (void)setIsAssistant:;
- (id)pageTrackUtil;
- (void)setPageTrackUtil:;
- (BOOL)enableShowRejectFooterWithMessage:;
- (id)configFootButtonLayoutWithMessage:;
- (id)footDescActionModel;
- (id)messageBcmUnitParams;
- (double)footDescSourceHeight;
- (double)currentBubbleViewContentHeight;
- (void)trackCardButtonTap:materialName:extParams:;
- (void)trackCardButtonTap:materialName:extParams:unitBtmId:responder:needSetBcm:;
- (void)transferSchemaToSkip:andTrackButtonTap:materialName:extParams:unitBtmId:responder:needSetBcm:;
- (id)footDescSourceModel;
- (BOOL)preRobtMsgNeedShowSwitchToHuman;
- (BOOL)shouldShowSwitchToHuman;
- (void)setShouldShowSwitchToHuman:;
- (void)decideHowToShowFootDesc;
- (id)footDescButtonExtWithMessage:;
- (id)footDescSwitchHumanClickBlock;
- (id)msgDisplayParams;
- (id)dynamicCardManager;
- (void)setDynamicCardManager:;
- (void)updateMessageModel:;
- (void)configFootDescV2WithMessage:;
- (void)setBaseMsgExtType:;
- (void)setBaseMsgCardType:;
- (void)setBaseMsgTemplateType:;
- (void)setBaseMsgCardEntityType:;
- (void)setBaseMsgCardSourceScene:;
- (void)setIsShowAiCornerIcon:;
- (void)setEnableNewFootDesc:;
- (void)configFootDescActionWithMessage:;
- (void)configFootDescSourceWithMessage:;
- (id)baseMsgExtType;
- (id)baseMsgCardType;
- (id)baseMsgTemplateType;
- (id)baseMsgCardEntityType;
- (id)baseMsgCardSourceScene;
- (void)setFootDescWhiteOperation:;
- (void)setFootDescBlackOperation:;
- (BOOL)canShowFootDescSource;
- (BOOL)canShowFootDescAction;
- (BOOL)canShowFootDescOld;
- (BOOL)enableNewFootDesc;
- (unsigned long long)footDescWhiteOperation;
- (unsigned long long)footDescBlackOperation;
- (id)realMessageTypeWithMessage:;
- (BOOL)isRobot;
- (id)configRobotCardFootTextLayoutWithMessage:;
- (id)configCardFootTextLayoutWithMessage:;
- (id)configTextFootTextLayoutWithMessage:;
- (id)footDescButtonBizCategoryWithMessage:;
- (void)setNeedDisplayRobotReqId:;
- (id)rebuildRobotTipAttributeString;
- (id)realCardTypeWithMessage:;
- (id)rejectFooterParamsWithMessage:;
- (void)setCurShopItem:;
- (id)footDescStyleForTrack;
- (unsigned long long)combinationWithTopType;
- (id)msgListTypeString;
- (BOOL)shouldShowBenedictionImageView;
- (id)onTrackMsgDetailDisplay;
- (void)updateFootDescOperationWithConfig:;
- (void)buildRobotTipContentWithType:buttonType:robotReqId:;
- (void)setNeedDisplayRobotTip:;
- (BOOL)shouldShowRobotFootDesc;
- (id)robotReqId;
- (void)updateWithOldCellModel:;
- (void)preHandleData;
- (void)bindIsRead:shopInfo:;
- (void)reBulildCellFullContentHeight;
- (id)currentDisplayCellCornerRadius;
- (void)transferSchemaToSkip:unitBtmId:responder:needSetBcm:;
- (void)trackTemplateCardMsgUpdateWithDuration:isRefactor:scene:;
- (id)trackCellDisplayUniqueKey;
- (id)curCellIdentifier;
- (void)setIsRobot:;
- (id)onClickSkuConsult;
- (void)setOnClickSkuConsult:;
- (void)setOnTrackMsgDetailDisplay:;
- (id)onClickReply;
- (void)setOnClickReply:;
- (id)onPreviewTextBlock;
- (void)setOnPreviewTextBlock:;
- (void)setFootDescSwitchHumanClickBlock:;
- (BOOL)isShowAiCornerIcon;
- (id)aiCornerIconURLString;
- (void)setAiCornerIconURLString:;
- (id)curShopItem;
- (id)cardStateManager;
- (void)setCardStateManager:;
- (void)setFootDescSourceModel:;
- (BOOL)needDisplayRobotTip;
- (id)needDisplayRobotReqId;
- (void)setPreRobtMsgNeedShowSwitchToHuman:;
- (unsigned long long)msgListType;
- (void)setMsgListType:;
- (void)setMsgListTypeString:;
- (id)combinationWithTopID;
- (BOOL)isRead;
- (unsigned long long)hash;
- (id)message;
- (void).cxx_destruct;
- (void)setDataSource:;
- (void)setMessage:;
- (BOOL)isEqual:;
- (id)initWithMessage:;
- (id)dataSource;
- (long long)aggregationStyle;
- (void)setIsRead:;
- (BOOL)isAggregation;
+ (id)riskTextSizeWithModel:;
+ (id)careNoticeMsgType;
+ (BOOL)isCareCard;
+ (BOOL)isCareCardWithCardType:;
+ (id)foldInfoWithMessage:;
+ (BOOL)willBreakLineWithAttributedText:textMaxWidth:insets:;
+ (id)messageModelFromMessage:belongingConversation:dynamicCardManager:;
+ (Class)cellClass;
@end
