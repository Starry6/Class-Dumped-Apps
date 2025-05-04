@interface AWEStudioAIGCTemplateAsyncBusinessHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)handleGeneratedNoticeClickBeforeTaskBatchProcessFinish:noticeParams:completion:;
+ (void)handleAIGCGeneratedWithTask:scene:generationInfo:completion:;
+ (void)handleAIGCGeneratedWithTask:scene:taskInfo:completion:;
+ (void)saveGeneratingDraftWithTask:publishModel:completion:;
+ (void)_runSaveGeneratingDraftCallbackWithTask:success:resultDraftID:error:completion:;
+ (void)_saveGeneratingDraftWithTask:originalDraftID:newDraftID:modelForDraft:publishModel:completion:;
@end
