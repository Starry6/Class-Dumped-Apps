@interface AWESelectTemplateTracker : NSObject
+ (void)trackForClickSelectTemplateButton:;
+ (id)commonParamsForPublishModel:;
+ (void)trackForVideoPlayAfterChangeTemplate:;
+ (void)trackForVideoPlayTime:;
+ (void)trackForClickChooseTemplate:chooseType:;
+ (void)trackForEnterTemplateEditScene:;
+ (void)trackForTemplateShow:index:;
+ (void)trackForBackToStudioEditPage:;
+ (void)trackForClickSaveTemplateEdit:;
+ (void)trackForClickReplaceMaterial:;
+ (void)trackForSelectAsset:;
+ (void)trackForClickSaveAssetEdit:;
+ (void)trackForCancelAssetEdit:;
+ (void)trackForEnterEditTextScene:;
+ (void)trackForSelectTemplateText:;
+ (void)trackForStartSingleTextEdit:;
+ (void)trackForSaveSingleTextEdit:;
+ (void)trackForCancelTextEdit:;
+ (void)trackForCompleteTextEdit:;
+ (id)contentTypeFromModel:;
+ (id)p_oneClickFilmingAdditonParamsForTrack:withIndex:;
+ (void)trackForVideoPlayFinish:;
@end
