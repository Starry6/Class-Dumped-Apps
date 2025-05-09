@interface HTSLiveAudioBGData : IESLivePBBaseMessage
@property (nonatomic) BOOL downloading;
@property (nonatomic) BOOL thumbnailDownloading;
@property (nonatomic) BOOL isDefault;
@property (nonatomic) BOOL resourceAvailable;
@property (nonatomic) BOOL thumbnailResourceAvailable;
@property (nonatomic) BOOL isStrongInsertBg;
@property (nonatomic) BOOL isTimeLimit;
@property (nonatomic) BOOL isAnimatedBg;
@property (nonatomic) BOOL shouldAddedToRemoteThemeList;
@property (nonatomic) UIImage ugcImage;
@property (nonatomic) NSString uploadedUri;
@property (nonatomic) NSString fileFormat;
@property (nonatomic) NSURL videoFileUrl;
@property (nonatomic) NSData gifImageData;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} visibleRect;
@property (nonatomic) NSString bgUri;
@property (nonatomic) q fromType;
@property (nonatomic) q id_p;
@property (nonatomic) NSString imageUri;
@property (nonatomic) NSInteger imgType;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) HTSLiveImage imageThumbnail;
@property (nonatomic) BOOL hasImageThumbnail;
@property (nonatomic) HTSLiveImage imageAnimatedBg;
@property (nonatomic) BOOL hasImageAnimatedBg;
@property (nonatomic) HTSLiveImage imageNormalAvatar;
@property (nonatomic) BOOL hasImageNormalAvatar;
@property (nonatomic) HTSLiveImage imageStartupAvatar;
@property (nonatomic) BOOL hasImageStartupAvatar;
@property (nonatomic) HTSLiveImage imageChatJoinIcon;
@property (nonatomic) BOOL hasImageChatJoinIcon;
@property (nonatomic) HTSLiveImage imageStaticBg;
@property (nonatomic) BOOL hasImageStaticBg;
@property (nonatomic) HTSLiveAudioSpeakingImageList speakingImageList;
@property (nonatomic) BOOL hasSpeakingImageList;
@property (nonatomic) NSString statusColorValue;
@property (nonatomic) NSString publicScreenColorValue;
@property (nonatomic) NSInteger timeLimit;
@property (nonatomic) NSInteger bgType;
@property (nonatomic) NSString emptyStartColor;
@property (nonatomic) NSString emptyEndColor;
@property (nonatomic) HTSLiveImage imageColdBg;
@property (nonatomic) BOOL hasImageColdBg;
@property (nonatomic) NSString micBgcolorValue;
@property (nonatomic) NSMutableArray iconMicNormalsArray;
@property (nonatomic) Q iconMicNormalsArray_Count;
@property (nonatomic) HTSLiveImage iconMicLock;
@property (nonatomic) BOOL hasIconMicLock;
@property (nonatomic) NSString colorMicText;
@property (nonatomic) NSString colorMicLine;
@property (nonatomic) NSString colorMicBg;
@property (nonatomic) NSString themeLabel;
@property (nonatomic) NSInteger bgStatus;
@property (nonatomic) HTSLiveAnimatedBgInfo animateInfo;
@property (nonatomic) BOOL hasAnimateInfo;
@property (nonatomic) NSString idStr;
@property (nonatomic) NSInteger playMode;
@property (nonatomic) NSString themeTag;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) NSInteger formatType;
@property (nonatomic) HTSLiveAudioSpeakingImageList speakingImageV2;
@property (nonatomic) BOOL hasSpeakingImageV2;
- (void)setUploadedUri:;
- (id)bgUri;
- (void)downloadImageWithUrls:roomID:anchorID:retryCount:completion:;
- (void)downloadResources:anchorID:completion:;
- (void)downloadResources:anchorID:retryCount:completion:;
- (void)downloadResourcesWithImageUrls:videoUrls:roomID:anchorID:retryCount:completion:;
- (void)downloadThumbnailResources:anchorID:completion:;
- (void)downloadThumbnailResources:anchorID:retryCount:completion:;
- (void)downloadVideoWithUrls:roomID:anchorID:retryCount:completion:;
- (id)gifImageData;
- (id)imageUrlsNeedsToBeDownload;
- (BOOL)isAnimatedBg;
- (BOOL)isEqualWith:;
- (BOOL)isStrongInsertBg;
- (BOOL)isTimeLimit;
- (BOOL)isUgcAudioBgData;
- (BOOL)isValidImage:url:;
- (BOOL)resourceAvailable;
- (void)setGifImageData:;
- (void)setResourceAvailable:;
- (void)setShouldAddedToRemoteThemeList:;
- (void)setThumbnailDownloading:;
- (void)setThumbnailResourceAvailable:;
- (void)setUgcImage:;
- (void)setVideoFileUrl:;
- (BOOL)shouldAddedToRemoteThemeList;
- (id)themeTypeForTracking;
- (BOOL)thumbnailDownloading;
- (BOOL)thumbnailResourceAvailable;
- (id)ugcAnimatedImageUrlsNeedsToBeDownload;
- (id)ugcImage;
- (id)ugcVideoFileName;
- (id)ugcVideoUrlsNeedsToBeDownload;
- (id)uploadedUri;
- (id)videoFileUrl;
- (BOOL)isDefault;
- (void)setVisibleRect:;
- (void)setDownloading:;
- (id)visibleRect;
- (void)setIsDefault:;
- (BOOL)downloading;
- (id)fileFormat;
- (void)setFileFormat:;
- (long long)fromType;
- (void)setFromType:;
+ (id)descriptor;
@end
