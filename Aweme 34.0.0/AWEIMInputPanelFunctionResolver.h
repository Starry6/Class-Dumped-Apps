@interface AWEIMInputPanelFunctionResolver : AWEIMComponentBase
@property (nonatomic) NSArray messageVCInputFuntions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (id)aAWEIMModuleServiceHTSAdaper;
- (id)messageVCInputFuntions;
- (BOOL)p_canShowInputPanelGameEntry;
- (BOOL)p_shouldShowWatchTogetherEntrance;
- (BOOL)p_shouldShowExchangeAnswerEntrance;
- (void)setMessageVCInputFuntions:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
+ (BOOL)shouldShowGroupVoipEntranceForConversation:;
+ (Class)aAWEIMModuleServiceHTSAdaperClass;
+ (id)filteredInputVCFunctionsWithFunctions:byAuthorServiceFlag:;
+ (BOOL)isRTVEnableWithIsVideo:forConversation:;
+ (long long)p_maxConversationMemberLimitForGroupVoipEntranceShow;
+ (id)functionsInPreferredOrder;
+ (id)p_functionStringToEnumDic;
+ (id)inputVCPlusPanelFunctionsWithMessageVCInputFunctions:forConversation:;
+ (BOOL)canShowIMSendPhotoFunction;
+ (BOOL)p_groupConversationIsValid:;
+ (BOOL)p_shouldShowGroupVoipEntranceBySettings;
+ (BOOL)p_shouldShowGroupVoipEntranceByGroupMemmber:;
@end
