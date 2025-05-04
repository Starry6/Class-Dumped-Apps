@interface AWETeenInteractionTracker : NSObject
+ (void)trackFavouriteWithModel:favourite:VcType:extra:;
+ (void)trackLikeWithModel:extra:;
+ (void)trackMorePanelShowWithModel:enterFrom:enterMethod:enterPosition:downloadStatus:fullscreen:inAlbum:;
+ (void)trackSysPhotoButtonShowWithModel:enterFrom:fullscreen:;
+ (void)trackReportWithModel:enterFrom:enterMethod:context:fullscreen:;
+ (void)trackShareClickWithModel:VcType:platform:fullscreen:;
+ (void)trackDownloadClickWithModel:enterFrom:fullscreen:;
+ (void)trackSysPhotoButtonClickWithModel:enterFrom:fullscreen:;
+ (void)trackClickChangeSpeedEntrance:enterFrom:enterMethod:;
+ (void)trackChangeSpeedMode:enterFrom:enterMethod:speedMode:;
+ (void)trackDislikeWithModel:context:;
+ (void)trackClickMoreWithModel:context:;
+ (void)trackTimeBarDrawWithAction:model:context:;
+ (void)trackAnchorViewClickWithAnchroInfo:context:;
+ (void)trackAnchorViewShowWithAnchroInfo:context:;
+ (void)trackShowStrongSubscribeWithModel:context:;
+ (void)trackDownloadEndWithModel:enterFrom:endStatus:duration:fullscreen:;
+ (void)trackSysPhotoPermissionPopupWithEnterFrom:;
+ (void)trackSysPhotoPermissionSettingClickWithEnterFrom:;
+ (void)trackEncyKonwledgeClickWithModel:context:showType:;
+ (void)trackTeenGrootEntranceClickWithModel:context:pediaID:;
@end
