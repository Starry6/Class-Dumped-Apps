@interface AWECommerceStickerDetailModel : AWEBaseApiModel
@property (nonatomic) NSString stickerID;
@property (nonatomic) NSString adOwnerID;
@property (nonatomic) NSString adOwnerSecUserID;
@property (nonatomic) NSString adOwnerName;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString descLetters;
@property (nonatomic) NSString descOpenURL;
@property (nonatomic) NSString descWebURL;
@property (nonatomic) AWEURLModel publishIconUrl;
@property (nonatomic) NSString screenDesc;
@property (nonatomic) NSString publishLetters;
@property (nonatomic) NSString publishOpenUrl;
@property (nonatomic) NSString publishWebUrl;
@property (nonatomic) NSString musicID;
@property (nonatomic) NSString challengeID;
@property (nonatomic) BOOL screenSwitch;
@property (nonatomic) NSString publishWebUrlTitle;
@property (nonatomic) NSString descUrlTitle;
@property (nonatomic) AWEURLModel screenIconURL;
@property (nonatomic) q expireTime;
@property (nonatomic) AWECommerceStickerUnlockInfoModel unlockInfo;
@property (nonatomic) AWECommerceStickerDisclaimerModel disclaimer;
@property (nonatomic) AWETaskLiteModel taskLite;
@property (nonatomic) NSString flashID;
- (id)musicID;
- (void)setMusicID:;
- (void)setStickerID:;
- (void)setPublishIconUrl:;
- (id)publishIconUrl;
- (id)stickerID;
- (id)flashID;
- (void)setFlashID:;
- (id)adOwnerID;
- (void)setAdOwnerID:;
- (id)adOwnerSecUserID;
- (void)setAdOwnerSecUserID:;
- (id)adOwnerName;
- (void)setAdOwnerName:;
- (id)descLetters;
- (void)setDescLetters:;
- (id)descOpenURL;
- (void)setDescOpenURL:;
- (id)descWebURL;
- (void)setDescWebURL:;
- (id)screenDesc;
- (void)setScreenDesc:;
- (id)publishLetters;
- (void)setPublishLetters:;
- (id)publishOpenUrl;
- (void)setPublishOpenUrl:;
- (id)publishWebUrl;
- (void)setPublishWebUrl:;
- (BOOL)screenSwitch;
- (void)setScreenSwitch:;
- (id)publishWebUrlTitle;
- (void)setPublishWebUrlTitle:;
- (id)descUrlTitle;
- (void)setDescUrlTitle:;
- (id)screenIconURL;
- (void)setScreenIconURL:;
- (id)unlockInfo;
- (void)setUnlockInfo:;
- (id)taskLite;
- (void)setTaskLite:;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (long long)expireTime;
- (void)setExpireTime:;
- (id)challengeID;
- (void)setChallengeID:;
- (id)disclaimer;
- (void)setDisclaimer:;
+ (id)publishIconUrlJSONTransformer;
+ (id)screenIconURLJSONTransformer;
+ (id)unlockInfoJSONTransformer;
+ (id)disclaimerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
