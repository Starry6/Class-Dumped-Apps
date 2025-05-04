@interface AWEDraftToPublishViewModelTranslator : NSObject
+ (void)useNLEURSProgressiveRenderWithPublishViewModel:completion:;
+ (void)retrievePublishModuleFromDraft:isEdit:skipLoadVideo:completion:;
+ (void)retrievePublishModuleFromDraft:context:completion:;
+ (void)p_retrievePublishModuleFromDraft:context:completion:;
+ (void)p_logDraftLoadStageBeginWithRetrieveFlag:stage:;
+ (id)_loadPublishViewModelFromDraft:context:;
+ (void)p_logDraftLoadStage:isSuccess:logString:;
+ (void)p_trackErrorWithDraftId:action:error:;
+ (void)p_asyncRecoverResourceForDraft:publishViewModel:;
+ (void)p_trackLoadSucceedWithDraftId:;
+ (void)p_loadNLEIfNeededWithdraftId:publishViewModel:context:completion:;
+ (void)p_restorePublishViewModel:draftID:completion:;
+ (void)p_redownloadMusicIfNeededWithDraft:publishViewModel:context:completion:;
+ (void)_loadVideoDataFromFile:retry:completion:;
+ (id)recoverQueue;
+ (void)p_handleUserEditMusicForAdvanceEditDraft:publishModel:nleEditor:context:completion:;
+ (void)p_recoverNLEResourceWithNLEModel:completion:;
+ (void)retrievePublishModuleFromDraft:isEdit:completion:;
+ (void)retrievePublishModelFromDraftId:isEdit:skipLoadVideo:completion:;
@end
