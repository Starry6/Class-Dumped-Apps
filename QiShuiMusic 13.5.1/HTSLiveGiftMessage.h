@interface HTSLiveGiftMessage : IESLivePBBaseMessage
@property (nonatomic) BOOL isFakedBigGift;
@property (nonatomic) BOOL isFakedNormalGift;
@property (nonatomic) BOOL special;
@property (nonatomic) BOOL isFakedInteractiveGift;
@property (nonatomic) NSDictionary effectMixGiftMaskInfo;
@property (nonatomic) q sendGiftAbnormalType;
@property (nonatomic) NSMutableArray mixToUserIdsArray;
@property (nonatomic) HTSLiveGiftBanner iesliveGiftBanner;
@property (nonatomic) IESLiveGiveGiftTimeTraceTool traceTool;
@property (nonatomic) BOOL seriesGiftMessageSplitted;
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q giftId;
@property (nonatomic) q fanTicketCount;
@property (nonatomic) q groupCount;
@property (nonatomic) q repeatCount;
@property (nonatomic) q comboCount;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) HTSLiveUser toUser;
@property (nonatomic) BOOL hasToUser;
@property (nonatomic) NSInteger repeatEnd;
@property (nonatomic) HTSLiveGiftMessage_TextEffect textEffect;
@property (nonatomic) BOOL hasTextEffect;
@property (nonatomic) q groupId;
@property (nonatomic) q incomeTaskgifts;
@property (nonatomic) q roomFanTicketCount;
@property (nonatomic) HTSLiveGiftIMPriority priority;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) HTSLiveGiftStruct gift;
@property (nonatomic) BOOL hasGift;
@property (nonatomic) NSString logId;
@property (nonatomic) q sendType;
@property (nonatomic) HTSLivePublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
@property (nonatomic) HTSLiveText trayDisplayText;
@property (nonatomic) BOOL hasTrayDisplayText;
@property (nonatomic) q bannedDisplayEffects;
@property (nonatomic) NSString diyItemInfo;
@property (nonatomic) HTSLiveGiftTrayInfo trayInfo;
@property (nonatomic) BOOL hasTrayInfo;
@property (nonatomic) NSInteger clientGiftSource;
@property (nonatomic) NSString giftPlayParam;
@property (nonatomic) HTSLiveAnchorGiftData anchorGift;
@property (nonatomic) BOOL hasAnchorGift;
@property (nonatomic) NSString interactGiftInfo;
@property (nonatomic) GPBInt64Array minAssetSetArray;
@property (nonatomic) Q minAssetSetArray_Count;
@property (nonatomic) q totalCount;
@property (nonatomic) NSMutableArray toOpenidsArray;
@property (nonatomic) Q toOpenidsArray_Count;
@property (nonatomic) q sendTime;
@property (nonatomic) q forceDisplayEffects;
@property (nonatomic) NSString traceId;
@property (nonatomic) q effectDisplayTs;
@property (nonatomic) HTSLiveSendTogether sendTogether;
@property (nonatomic) BOOL hasSendTogether;
@property (nonatomic) HTSLiveExtraEffect extraEffect;
@property (nonatomic) BOOL hasExtraEffect;
@property (nonatomic) HTSLiveRoomHotInfo roomHotInfo;
@property (nonatomic) BOOL hasRoomHotInfo;
@property (nonatomic) HTSLiveAssetEffectMixInfo assetEffectMixInfo;
@property (nonatomic) BOOL hasAssetEffectMixInfo;
@property (nonatomic) BOOL displayForSelf;
@property (nonatomic) NSInteger multiSendEffectLevel;
@property (nonatomic) NSMutableArray seriesGiftDataArray;
@property (nonatomic) Q seriesGiftDataArray_Count;
- (BOOL)special;
- (void)configSendGiftAbnormalTypeWithGiftData:giftIdForSendRequest:;
- (id)effectMixGiftMaskInfo;
- (BOOL)hasEffectMixImages;
- (id)iesliveGiftBanner;
- (BOOL)isFakedBigGift;
- (BOOL)isFakedInteractiveGift;
- (BOOL)isFakedNormalGift;
- (id)mixToUserIdsArray;
- (long long)sendGiftAbnormalType;
- (BOOL)seriesGiftMessageSplitted;
- (void)setEffectMixGiftMaskInfo:;
- (void)setIesliveGiftBanner:;
- (void)setIsFakedBigGift:;
- (void)setIsFakedInteractiveGift:;
- (void)setIsFakedNormalGift:;
- (void)setMixToUserIdsArray:;
- (void)setSendGiftAbnormalType:;
- (void)setSeriesGiftMessageSplitted:;
- (void)setSpecial:;
- (void)setTraceTool:;
- (id)traceTool;
+ (long long)getSendGiftAbnormalType:;
+ (id)messagesGiftSendResponseData:sendUser:toUser:room:extraData:giftIDForSendRequest:traceTool:;
+ (id)messagesPropConsumeResultData:sendUser:toUser:room:extraData:;
+ (id)splitSeriesGiftMessage:;
+ (id)sugarDaddyUserWithDisplayText:currentUser:;
+ (id)descriptor;
@end
