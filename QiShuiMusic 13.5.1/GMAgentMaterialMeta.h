@interface GMAgentMaterialMeta : NSObject
@property (nonatomic) NSObject<ABUMediatedNativeAdData> data;
@property (nonatomic) BUImage adLogo;
@property (nonatomic) double videoAspectRatio;
@property (nonatomic) NSString appPrice;
@property (nonatomic) NSString advertiser;
@property (nonatomic) NSString brandName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)AdTitle;
- (id)AdSource;
- (id)adTitle;
- (id)ADXName;
- (id)AdDescription;
- (void)setFilterWords:;
- (id)adLogo;
- (BOOL)allowCustomVideoPlayer;
- (long long)commentNum;
- (id)filterWords;
- (id)imageAry;
- (long long)imageMode;
- (id)initWithRealObject:;
- (id)mediaExt;
- (id)mediation;
- (void)setADXName:;
- (void)setAdTitle:;
- (void)setAppSize:;
- (void)setCommentNum:;
- (void)setImageAry:;
- (void)setImageMode:;
- (void)setMediaExt:;
- (long long)videoResolutionHeight;
- (long long)videoResolutionWidth;
- (long long)score;
- (id)data;
- (id)initWithDictionary:error:;
- (BOOL)isMemberOfClass:;
- (id)icon;
- (id)advertiser;
- (id)buttonText;
- (long long)interactionType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)videoDuration;
- (void)setScore:;
- (void)setIcon:;
- (id)brandName;
- (void).cxx_destruct;
- (id)source;
- (BOOL)isKindOfClass:;
- (void)setData:;
- (void)setInteractionType:;
- (id)forwardingTargetForSelector:;
- (void)setSource:;
- (void)setButtonText:;
- (id)videoUrl;
- (id)groupInfo;
- (void)setVideoDuration:;
- (double)videoAspectRatio;
- (id)adDescription;
- (void)setAdDescription:;
- (void)setGroupInfo:;
- (id)appPrice;
- (long long)appSize;
@end
