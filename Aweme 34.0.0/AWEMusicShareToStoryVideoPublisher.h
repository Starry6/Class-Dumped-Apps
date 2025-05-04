@interface AWEMusicShareToStoryVideoPublisher : NSObject
+ (void)p_hideLoadingView;
+ (void)p_logErrorWithError:msg:;
+ (void)p_showLoadingViewWithCancelHander:;
+ (void)p_downloadImageWithURLModel:then:;
+ (void)p_downloadMusicWithMusic:then:;
+ (void)p_getOpenPlatformShareIdWithSourceStyleId:trackId:completion:;
+ (void)p_handleNextWithVaildRequirement:;
+ (void)p_logInfoWithMsg:;
+ (void)p_showErrorToast;
+ (id)p_generatePublishModelWithRequirement:;
+ (id)p_coverStickerEffectIdWithIsPGC:;
+ (id)p_getDoiminantColorOfImage:topLeftPoint:bottomRightPoint:;
+ (id)p_newLyricStickerEffectId;
+ (BOOL)p_isEmptyHashTagName:;
+ (BOOL)p_replaceCoverEffectImageResourceWithImage:forEffect:;
+ (id)p_coverEffectImageResourceName;
+ (void)handleMusicShareToStoryVideoEditWithMusic:extraInfo:completion:;
+ (id)p_genBackgroundImage:size:isPGC:;
+ (id)p_getDoiminantColorStringOfImage:topLeftPoint:bottomRightPoint:;
+ (id)p_coverStickerAnimationEffectId;
+ (id)p_lyricStickerEffectId;
@end
