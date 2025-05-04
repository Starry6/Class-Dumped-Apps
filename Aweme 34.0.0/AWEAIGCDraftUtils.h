@interface AWEAIGCDraftUtils : NSObject
+ (void)updateAIGCDraft:withState:completion:;
+ (void)saveAIGCDoingTypeDraft:coverImage:markDraftFlowStepAsPublish:completion:;
+ (void)saveAIGCDoneDraftWithRenderImageLocalPath:renderImageDownLoadPath:draftID:stickerID:effectExtra:completion:;
+ (void)saveAIGCDoneDraftWithDraftID:changeBlock:completion:;
@end
