@interface AWELiveVSShareHelper : NSObject
+ (void)openLiveFormatWithShareContentModel:roomModel:fromController:eventContext:dismissBlock:;
+ (void)openLiveFormatWithShareContentModel:episodeModel:fromController:eventContext:dismissBlock:;
+ (void)playbacktLandscapeShareWithContentModel:episodeModel:fromController:eventContext:dismissBlock:;
+ (void)openImageShareLandscpaePanelWithContentModel:roomModel:fromController:eventContext:willDismissHandler:;
+ (id)getShareModelWithRoom:shareContent:;
+ (void)showSharePanelWithContentModel:roomModel:onViewController:;
+ (void)openLandscapePannelWithContentModel:roomModel:eventContext:fromController:;
+ (void)addTrackParamsToContentModel:;
+ (void)adjustMappedRoom:withShareContent:;
+ (id)livesdkShareEventPageWithType:;
+ (id)livesdkShareContentWithType:;
+ (void)collectionShareWithModel:content:fromController:dismissBlock:;
+ (void)chainSceneShareWithModel:content:fromController:dismissBlock:;
+ (void)screenshotShareWithModel:content:fromController:dismissBlock:;
+ (void)openLiveBoardWithModel:fromController:dismissBlock:;
+ (id)getFormatModelWithRoom:shareContent:pageContext:;
+ (id)getShareModelWithEpisode:shareContent:;
+ (void)playbackShareWithModel:content:fromController:dismissBlock:;
+ (void)openFormatBoardWithContentModel:episodeModel:fromController:pageContext:dismissBlock:;
+ (id)getFormatModelWithEpisode:shareContent:pageContext:;
@end
