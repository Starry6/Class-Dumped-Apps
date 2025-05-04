@interface AWEOFGVideo : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)ironManPublishTaskWithAweModel:privacyType:ofgClientKey:ofgAppID:ofgError:;
+ (id)startVideoClipViewControllerWithModel:originPublishModel:extraDict:ofgClientKey:ofgAppID:ofgError:;
+ (id)createCutSameMVVideoWithTemplateId:assetPathList:withInfo:ofgClientKey:ofgAppID:ofgError:;
+ (id)createCutSameMVTemplateWithTemplateId:withInfo:ofgClientKey:ofgAppID:ofgError:;
+ (id)createVideoFromMusicWithInfo:missionModel:commercialAnchorModel:shouldApplySticker:ofgClientKey:ofgAppID:ofgError:;
+ (id)startVideoWithStickerID:referString:extraInfo:missionModel:commercialAnchorModel:prioritized:filterBusiness:ofgClientKey:ofgAppID:ofgError:;
@end
