@interface AWETeenAlbumTracker : NSObject
+ (void)trackAlbumClickWithModel:rank:enterFrom:isCoverDynamic:isCoverPlayed:labelType:extra:;
+ (void)trackAlbumShowWithModel:rank:enterFrom:isCoverDynamic:labelType:extra:;
+ (void)trackTeenAlbumPlayTimeWithModel:rank:duration:enterFrom:isCoverDynamic:labelType:;
+ (void)trackVideoListShowDuration:isLandscape:;
+ (void)trackAlbumLastPageShow:enterMethod:pageType:isLandScape:;
+ (void)trackCompilationListShow:enterFrom:;
+ (void)trackVideoSideListClickWithModel:isLandscape:rankDiff:duration:;
+ (void)trackSideListShow:enterFrom:;
+ (void)trackAlbumLastPageScrollAndIsLandscape:;
+ (void)trackAlbumLastPageClose:isLandScape:;
+ (void)trackAlbumShowWithModel:rank:enterFrom:enterPosition:isCoverDynamic:labelType:extra:;
+ (void)trackAlbumShowWithModel:rank:enterFrom:enterPosition:isCoverDynamic:labelType:showType:extra:;
+ (void)trackAlbumClickWithModel:rank:enterFrom:enterPosition:isCoverDynamic:isCoverPlayed:labelType:extra:;
+ (void)trackTimeBarPageShow;
+ (void)trackLandscapeShowWithModel:enterFrom:enterPosition:isInAlbum:;
+ (void)trackLandscapeClickWithModel:enterFrom:enterPosition:isInAlbum:enterMethod:playTime:itemDuration:;
+ (void)trackLandscapeQuitWithModel:enterFrom:enterPosition:isInAlbum:quitMethod:playTime:itemDuration:;
+ (void)trackAlbumCoverPlayWithModel:rank:enterFrom:labelType:extra:;
+ (void)trackAlbumVideoChooseTabClick:albumTitle:activateType:groupID:episode:tabIndex:;
+ (void)trackAlbumVideoNextClick:enterFrom:albumTitle:groupID:toGroupID:episode:;
@end
