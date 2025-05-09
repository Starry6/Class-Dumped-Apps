@interface IESIMVideoModel : IESIMBaseApiModel
@property (nonatomic) IESIMURLModel h264DownloadURL;
@property (nonatomic) BOOL isCDNURLExpired;
@property (nonatomic) BOOL hasHandledPlayURLExpired;
@property (nonatomic) BOOL hasHandledBitrateModlesExpired;
@property (nonatomic) IESIMURLModel playURL;
@property (nonatomic) IESIMURLModel playLowBitURL;
@property (nonatomic) IESIMURLModel h264URL;
@property (nonatomic) IESIMURLModel downloadURL;
@property (nonatomic) IESIMURLModel endWatermarkDownloadURL;
@property (nonatomic) IESIMURLModel captionWatermarkDownloadURL;
@property (nonatomic) IESIMURLModel coverURL;
@property (nonatomic) IESIMURLModel originCover;
@property (nonatomic) IESIMURLModel dynamicCover;
@property (nonatomic) IESIMURLModel animatedCover;
@property (nonatomic) IESIMURLModel optimizedCover;
@property (nonatomic) IESIMURLModel blurCover;
@property (nonatomic) NSArray bitrateModels;
@property (nonatomic) NSNumber duration;
@property (nonatomic) NSNumber height;
@property (nonatomic) NSNumber width;
@property (nonatomic) BOOL hasWatermark;
@property (nonatomic) BOOL hasEndWatermark;
@property (nonatomic) IESIMURLModel starComposeURL;
@property (nonatomic) BOOL isH265;
@property (nonatomic) q cdnURLExpiredTime;
@property (nonatomic) IESIMPlayTokenAuthModel tokenAuth;
@property (nonatomic) IESIMVideoTagModel videoTag;
@property (nonatomic) NSArray videoTags;
@property (nonatomic) BOOL needSetToken;
@property (nonatomic) NSString dashVideoModel;
@property (nonatomic) NSNumber realDuration;
@property (nonatomic) BOOL disableDynamicCover;
@property (nonatomic) BOOL isCoverCallBack;
@property (nonatomic) BOOL useStaticCover;
@property (nonatomic) IESIMMiscDownloadAddrs miscDownloadAddrs;
@property (nonatomic) NSArray bigThumbs;
@property (nonatomic) NSString currentPlayingURLKey;
@property (nonatomic) IESIMVideoBSModel preloadedBSModel;
@property (nonatomic) NSString meta;
- (id)h264DownloadURL;
- (id)h264URL;
- (BOOL)hasEndWatermark;
- (BOOL)isCDNURLExpired;
- (BOOL)isCoverCallBack;
- (void)setOriginCover:;
- (void)addParamsToModel:withType:;
- (id)animatedCover;
- (id)bigThumbs;
- (id)bitrateModels;
- (id)blurCover;
- (id)captionWatermarkDownloadURL;
- (long long)cdnURLExpiredTime;
- (id)currentPlayingURLKey;
- (id)dashVideoModel;
- (BOOL)disableDynamicCover;
- (id)dynamicCover;
- (id)endWatermarkDownloadURL;
- (BOOL)hasHandledBitrateModlesExpired;
- (BOOL)hasHandledPlayURLExpired;
- (BOOL)hasWatermark;
- (BOOL)isH265;
- (id)miscDownloadAddrs;
- (BOOL)needSetToken;
- (id)optimizedCover;
- (id)originCover;
- (id)playLowBitURL;
- (id)preloadedBSModel;
- (id)realDuration;
- (void)setBigThumbs:;
- (void)setBitrateModels:;
- (void)setCdnURLExpiredTime:;
- (void)setCurrentPlayingURLKey:;
- (void)setDashVideoModel:;
- (void)setDisableDynamicCover:;
- (void)setHasEndWatermark:;
- (void)setHasHandledBitrateModlesExpired:;
- (void)setHasHandledPlayURLExpired:;
- (void)setHasWatermark:;
- (void)setIsCDNURLExpired:;
- (void)setIsCoverCallBack:;
- (void)setIsH265:;
- (void)setMiscDownloadAddrs:;
- (void)setNeedSetToken:;
- (void)setPreloadedBSModel:;
- (void)setTokenAuth:;
- (void)setVideoTag:;
- (void)setVideoTags:;
- (id)starComposeURL;
- (id)tokenAuth;
- (BOOL)useStaticCover;
- (id)videoTag;
- (id)videoTags;
- (id)meta;
- (id)initWithDictionary:error:;
- (void)setWidth:;
- (void)setMeta:;
- (id)height;
- (void)setDuration:;
- (id)width;
- (id)downloadURL;
- (void)setHeight:;
- (void).cxx_destruct;
- (id)duration;
- (id)playURL;
- (void)setPlayURL:;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)animatedCoverJSONTransformer;
+ (id)bigThumbsJSONTransformer;
+ (id)bitrateModelsJSONTransformer;
+ (id)blurCoverJSONTransformer;
+ (id)captionWatermarkDownloadURLJSONTransformer;
+ (id)coverURLJSONTransformer;
+ (id)downloadURLJSONTransformer;
+ (id)dynamicCoverJSONTransformer;
+ (id)endWatermarkDownloadURLJSONTransformer;
+ (id)miscDownloadAddrsJSONTransformer;
+ (id)optimizedCoverJSONTransformer;
+ (id)originCoverJSONTransformer;
+ (id)playLowBitURLJSONTransformer;
+ (id)playURLJSONTransformer;
+ (void)setCDNURLExpiredThreshold:;
+ (id)starComposeURLJSONTransformer;
+ (id)tokenAuthJSONTransformer;
+ (id)videoTagJSONTransformer;
+ (id)videoTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
