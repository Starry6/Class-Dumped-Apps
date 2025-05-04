@interface AWEOpenShareProcessManager : NSObject
+ (void)startShareWithResp:params:completion:;
+ (BOOL)checkDouyinVersionValidToMiniVersion:;
+ (void)handleCheckPermissionResultToResp:ToDict:withCheckResult:;
+ (void)updateOpenPlatformShareToTypeWithResp:isAwemeSource:isShareToStory:;
+ (BOOL)supportAnchorType:;
+ (BOOL)isLunaMusicShare:;
+ (id)shareShootWay:;
+ (unsigned long long)getMediaTypeWithShareResp:withParams:;
+ (void)trackOpenPlatformShareParamUseMonitorWithShareResp:withParams:;
+ (void)shareProcessFinishWithResp:isSuccess:completion:;
+ (void)handlePublishResourceWithResp:params:completion:;
+ (id)getCheckPermissionParamsWithResp:WithParams:;
+ (BOOL)handleScopeCheckResult:resp:;
+ (void)handleStarEnterWithResp:params:completion:;
+ (void)handleAdditionalResourceWithResp:params:completion:;
+ (void)downloadMediaWithResp:params:completion:;
+ (void)handleOpenShareTitle:withParams:;
+ (void)handleOpenShareImageStickers:withParams:;
+ (void)handleOpenShareHashtagStickers:withParams:;
+ (void)handleOpenShareMentionStickers:withParams:;
+ (void)handleOpenShareQuickFlashStickers:withParams:;
+ (void)fillMentionsAndMentionStickersInfo:WithCompletion:;
+ (void)handlePoiIdAndOpenSharePoiStickers:withParams:completion:;
+ (void)handleCoverPath:withParams:completion:;
+ (BOOL)checkStickerAvailble:withResp:withParams:;
@end
