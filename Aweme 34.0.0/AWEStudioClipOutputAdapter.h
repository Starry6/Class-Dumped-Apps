@interface AWEStudioClipOutputAdapter : NSObject
+ (id)ensureSpacesInText:atUserText:;
+ (void)translateClipOutputData:publishModel:completion:;
+ (void)enterEditViewControllerWithOutputData:originalPublishModel:navigationViewController:;
+ (void)clipCompletionWithVideo:music:model:originalPublishModel:nav:coverImage:;
+ (void)translateClipOutputData:completion:;
+ (void)clipCompletionWithVideo:music:model:originalPublishModel:segmentedModel:nav:coverImage:;
+ (void)p_copyCommonValueFromOriginal:to:;
+ (void)enterEditViewControllerWithOutputData:originalPublishModel:segmentedModel:navigationViewController:;
+ (void)enterEditViewControllerWithOutputData:originalPublishModel:segmentedModel:navigationViewController:extraDict:;
@end
