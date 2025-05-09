@interface AWEPluginTakeVideoImpl : NSObject
@property (nonatomic) BOOL isWelfare;
@property (nonatomic) BOOL hasAnchorInVideo;
@property (nonatomic) BOOL videoIdWithoutAnchor;
@property (nonatomic) BOOL customStickerPathFromWeb;
@property (nonatomic) q versionCode;
@property (nonatomic) q videoDuration;
@property (nonatomic) q getUserIdCounts;
@property (nonatomic) @? completion;
@property (nonatomic) NSString appId;
@property (nonatomic) NSString token;
@property (nonatomic) NSString session;
@property (nonatomic) NSString appName;
@property (nonatomic) NSString aliasId;
@property (nonatomic) NSDictionary welfareDict;
@property (nonatomic) NSDictionary headerFieldDict;
@property (nonatomic) NSDictionary anchorRequestInfoExtra;
@property (nonatomic) NSDictionary mentionInfo;
@property (nonatomic) NSDictionary mentionMarkersResult;
@property (nonatomic) NSDictionary mentionStickersResult;
@property (nonatomic) NSDictionary stickersSettings;
@property (nonatomic) NSDictionary titleSettings;
@property (nonatomic) NSDictionary anchorsSettings;
@property (nonatomic) NSArray blockList;
@property (nonatomic) NSArray allMentionMarkerInfo;
@property (nonatomic) NSArray allHashtagMarkerInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didEndWithResult:error:;
- (id)aliasId;
- (void)setAliasId:;
- (id)mentionInfo;
- (void)ironManVideoPublishResult:;
- (void)addMentionsAndHashtagsWithExtras:body:;
- (void)setIsWelfare:;
- (void)setHasAnchorInVideo:;
- (void)setVideoIdWithoutAnchor:;
- (void)setCustomStickerPathFromWeb:;
- (void)setHeaderFieldDict:;
- (void)setTitleSettings:;
- (void)setAnchorsSettings:;
- (void)setMentionMarkersResult:;
- (id)getMentionMarkerWithArray:;
- (void)setAllMentionMarkerInfo:;
- (id)getHashtagMarkerWithArray:;
- (void)setAllHashtagMarkerInfo:;
- (void)setMentionStickersResult:;
- (id)getTextStickersListWithArray:;
- (id)getHashtagStickersListWithArray:;
- (id)getMentionStickersWithArray:;
- (id)getCustomStickersListWithArray:;
- (id)titleSettings;
- (void)setAnchorRequestInfoExtra:;
- (id)anchorRequestInfoExtra;
- (id)generateAnchorInfoWithParam:hasPermission:;
- (BOOL)isWelfare;
- (id)welfareDict;
- (void)userHasAnchorPermissionWithCompletion:;
- (void)getAllUserIdAndNickNameWithParam:completion:;
- (BOOL)hasAnchorInVideo;
- (BOOL)videoIdWithoutAnchor;
- (void)setGetUserIdCounts:;
- (long long)getUserIdCounts;
- (void)getUserIdWithOpenId:completion:;
- (void)getUserNickNamesWithOpenId:completion:;
- (void)setMentionInfo:;
- (id)headerFieldDict;
- (id)anchorsSettings;
- (void)setWelfareDict:;
- (id)generateSchemaWithPath:;
- (id)validColorHexString:;
- (double)validFontSize:;
- (double)validTime:start:;
- (double)validScale:;
- (id)mentionStickersResult;
- (id)mentionMarkersResult;
- (long long)validStartIndex:;
- (BOOL)customStickerPathFromWeb;
- (double)validScaleWeb:;
- (id)allMentionMarkerInfo;
- (id)allHashtagMarkerInfo;
- (void)bdp_uploadDouYinVideoWithParam:ironManParam:complete:;
- (id)init;
- (void)dealloc;
- (void)setSession:;
- (id)completion;
- (void)setCompletion:;
- (id)stickersSettings;
- (id)appId;
- (void)setStickersSettings:;
- (id)session;
- (void).cxx_destruct;
- (long long)videoDuration;
- (void)setToken:;
- (void)setAppName:;
- (id)token;
- (id)appName;
- (double)validLocation:;
- (void)setAppId:;
- (void)setVideoDuration:;
- (id)blockList;
- (void)setBlockList:;
- (BOOL)isValidLocation:;
- (void)setVersionCode:;
- (long long)versionCode;
+ (id)sharedPlugin;
@end
