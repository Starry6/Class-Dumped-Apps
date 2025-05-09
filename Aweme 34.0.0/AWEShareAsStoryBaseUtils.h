@interface AWEShareAsStoryBaseUtils : NSObject
+ (BOOL)isShareSceneWithPublishModel:;
+ (void)preloadShareMusicToStoryEffectsWithIsPGC:hasLyric:;
+ (long long)getImageAlbumIndexWithAweme:;
+ (id)postShareInfoWithAwemeModel:;
+ (id)JSONToDictionary:;
+ (void)addTrackParamsForThirdAppShareWithPublishModel:params:;
+ (BOOL)isShareLiveToStorySceneWithPublishModel:;
+ (BOOL)isShareToStorySceneWithPublishModel:;
+ (id)compressImage:toTargetSize:;
+ (void)hideShareHintIfNeeded:;
+ (BOOL)isNewVersionStyleSceneWithPublishModel:;
+ (id)shareToStoryEffectId;
+ (void)updateCanvasAnimatedInfo:toNLEModel:;
+ (BOOL)isCommonShareToStoryScene:;
+ (void)parseJSONString:modelClass:completion:;
+ (BOOL)isFromThirdAppWithStoryModel:;
+ (BOOL)isShareImageToStoryModelValid:;
+ (BOOL)isNetworkResourcePath:;
+ (id)canvasPlayerSize;
+ (id)generateRelatedReviewContentWithImageModel:;
+ (void)setupStoryPublishModel:;
+ (void)setupCategoryDaWithPublishModel:;
+ (void)setupShareStoryTypeWithPublishModel:;
+ (BOOL)isNewVersionStyleSceneWithLayout:;
+ (BOOL)canInfiniShareWithPublishModel:;
+ (void)isShareVideoToStoryModelValid:completion:;
+ (id)generateRelatedReviewContentWithVideoModel:;
+ (BOOL)shareUseLynx:;
+ (BOOL)canUseCloudCompileWithPublishModel:;
+ (BOOL)isShareCommentSceneWithPublishModel:;
+ (BOOL)isShareVideoToStoryModelValid:;
+ (BOOL)isShareCommentSticer:;
+ (id)checkVideoResource:completion:;
+ (BOOL)hasLinkWithStoryModel:;
+ (id)getPageIDFromPublishModel:;
+ (long long)linesCountWithString:maxWidth:;
+ (id)textSizeWithString:maxWidth:maxLineCount:;
+ (long long)linesCountWithString:maxWidth:maxLineCount:;
+ (id)regularPingFangFont:;
+ (BOOL)hasNoImageWithStoryModel:;
+ (id)mediumPingFangFont:;
+ (id)videoPublishViewModel;
+ (id)videoSizeOfAVAsset:;
+ (void)updateCanvasSourceSupportEffect:videoSize:playerSize:defaultVideoScale:minimumScale:maximumScale:;
+ (id)commentPublishViewModel;
+ (BOOL)isShareCommentImageSceneWithStoryModel:;
+ (void)addShareToStoryParamsWithAwemeModel:toParams:;
+ (BOOL)isNewStyleSceneWithPublishModel:;
+ (id)contentSizeWithPublishModel:;
+ (void)resetLocationModel:withPublishModel:;
+ (void)resetCommentLocationModel:withPublishModel:;
+ (void)resetLiveLocationModel:liveStickerModel:stickerGroupView:withPublishModel:;
+ (void)addTextStickerWithIESMMEffectInfo:publishModel:;
+ (id)storyColorWith32HexString:;
+ (id)findImageComponentsInLayout:isWritable:;
+ (BOOL)isShareCommentImageSceneWithPublishModel:;
+ (BOOL)varifyURLArray:;
+ (BOOL)isStoryContentModelValid:;
+ (BOOL)isThirdAppShareSceneWithPublishModel:;
+ (id)awemeModelInteractionStickersWithAwemeModel:;
+ (BOOL)isFeedSceneWithPublishModel:;
+ (id)generateRelatedReviewContentWithUserName:userAvatarUri:;
+ (double)totalHeightForCommentWithPublishModel:;
+ (double)commentComponentHeightForCommentWithPublishModel:;
+ (void)updateCanvasSource:videoSize:playerSize:defaultVideoScale:minimumScale:maximumScale:;
+ (BOOL)isShareToStoryCanvasType:;
+ (id)URLArrayWithStringArray:;
+ (id)textSizeWithString:maxWidth:;
@end
