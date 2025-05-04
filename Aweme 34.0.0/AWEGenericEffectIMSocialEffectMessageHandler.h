@interface AWEGenericEffectIMSocialEffectMessageHandler : AWEGenericEffectMessageBaseHandler
@property (nonatomic) ACCResourcesUploadServiceImpl resourceUploader;
- (id)bizIdentifier;
- (id)imModel;
- (id)parseUgcIdFromJsonString:;
- (id)p_transferUgcId:;
- (id)resourceUploader;
- (id)parseUserInfoFromJsonString:;
- (void)setResourceUploader:;
- (BOOL)canHandle:arg3Info:;
- (void)handleMessage:arg3Info:isGlobal:;
- (void)p_imageCachePathWithUrl:completion:;
- (void)p_handleUserInfoWithTaskId:arg3Info:isGlobal:;
- (void)p_handleRelationshipInfoWithTaskId:isGlobal:;
- (void)p_handleSparkWithTaskId:isGlobal:;
- (void)p_handleBurningManWithTaskId:isGlobal:;
- (void)p_handleEffectUGCDataWithTaskId:isGlobal:;
- (void)p_handleRandomGroupMemberWithTaskId:arg3Info:isGlobal:;
- (void)p_handleGroupInfoWithTaskId:isGlobal:;
- (void)p_handleConversationIdWithTaskId:isGlobal:;
- (id)p_genderTransition:;
- (id)p_genderType:;
- (id)deepCopyRequestModel:;
- (id)p_parseSceneFromJsonString:;
- (void)p_fetchAndDownloadEffectUGCWithParams:completion:;
- (void).cxx_destruct;
@end
