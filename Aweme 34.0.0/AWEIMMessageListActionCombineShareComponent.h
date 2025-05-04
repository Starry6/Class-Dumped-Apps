@interface AWEIMMessageListActionCombineShareComponent : AWEIMComponentBase
@property (nonatomic) AWEIMActionSheetItemModel shareItemModel;
@property (nonatomic) NSString accessoryText;
@property (nonatomic) BOOL needCreateGroup;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)addNotification;
- (BOOL)needCreateGroup;
- (void)setNeedCreateGroup:;
- (void)handleCloseContactVCNotification:;
- (void)transferToCombineMsgListWithMessage:;
- (void)transfertToCombineMsgListWithServerMessageId:;
- (id)shareItemModel;
- (void)p_onShareItemTapped;
- (id)p_getCombineShareMessageTitle:;
- (void)openSharePanelAndSendMsg:service:;
- (void)shareWithMessage:shareModels:conversation:cachedSecurityCheckContext:accessoryText:completion:;
- (void)openSendSharePanelWithResultCompletion:;
- (void)setShareItemModel:;
- (void)setAccessoryText:;
- (id)accessoryText;
- (void).cxx_destruct;
- (id)conversation;
+ (BOOL)canCreateComponentWithContext:;
@end
