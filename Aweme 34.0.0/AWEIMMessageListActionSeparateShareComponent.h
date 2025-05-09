@interface AWEIMMessageListActionSeparateShareComponent : AWEIMComponentBase
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
- (id)shareItemModel;
- (void)openSendSharePanelWithResultCompletion:;
- (void)setShareItemModel:;
- (void)onShareItemTapped;
- (void)reportShareWithCount:shareModel:;
- (void)setAccessoryText:;
- (id)accessoryText;
- (void).cxx_destruct;
- (id)conversation;
+ (BOOL)canCreateComponentWithContext:;
+ (void)trackShareMessageCompletionWithReferString:panelType:isSuccess:errorMsg:targetType:;
+ (void)shareWithMessage:shareModels:conversation:cachedSecurityCheckContext:accessoryText:completion:;
+ (void)shareWithMessageArray:accessoryText:shareModels:conversation:cachedSecurityCheckContext:;
+ (BOOL)shouldDegradeMessage:;
+ (void)sendDegradeTextMsg:accessoryText:shareMessage:shareModels:;
+ (void)sendMsg:accessoryText:withItemId:shareImpl:shareModels:;
@end
