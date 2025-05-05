@interface IESEffectEventTrackHelper : NSObject
+ (void)trackCommonEventWithEventName:extraParameters:;
+ (void)trackEffectDownloadEventWithEffectRecord:effectName:effectDownloadDuration:totalDownloadDuration:downloadError:algorithmDownloadInfo:extraInfoDict:;
@end
