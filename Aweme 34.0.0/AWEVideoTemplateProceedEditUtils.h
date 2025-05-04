@interface AWEVideoTemplateProceedEditUtils : NSObject
+ (BOOL)restoreBizInfoWithVideoTemplateTrackChangeInfo:stickerService:publishViewModel:;
+ (id)mvSourceForPresetStickerWithPublishViewModel:;
+ (id)mvTypeForPresetStickerWithPublishViewModel:;
+ (BOOL)hasTemplateWithPublishViewModel:;
@end
