@interface AWECodeGenAwemeStatusModel : AWEBaseDataModel
@property (nonatomic) NSString awemeId;
@property (nonatomic) BOOL isDelete;
@property (nonatomic) BOOL allowShare;
@property (nonatomic) BOOL allowComment;
@property (nonatomic) BOOL isPrivate;
@property (nonatomic) BOOL withGoods;
@property (nonatomic) NSInteger privateStatus;
@property (nonatomic) BOOL withFusionGoods;
@property (nonatomic) BOOL inReviewing;
@property (nonatomic) NSInteger reviewed;
@property (nonatomic) BOOL selfSee;
@property (nonatomic) BOOL isProhibited;
@property (nonatomic) q downloadStatus;
@property (nonatomic) NSDictionary reviewResult;
@property (nonatomic) NSInteger musicEditStatus;
@property (nonatomic) NSInteger dontShareStatus;
@property (nonatomic) NSInteger videoHideSearch;
@property (nonatomic) NSDictionary videoMute;
@property (nonatomic) NSDictionary awemeEditInfo;
@property (nonatomic) BOOL reviewedFriendSee;
@property (nonatomic) NSInteger partSee;
@property (nonatomic) q itemVersion;
@property (nonatomic) q listenVideoStatus;
@property (nonatomic) BOOL allowFriendRecommend;
@property (nonatomic) BOOL allowSelfRecommendToFriend;
@property (nonatomic) BOOL allowFriendRecommendGuide;
@property (nonatomic) BOOL yummeHitN1;
@property (nonatomic) q userStatus;
@property (nonatomic) NSInteger userStatusFiltered;
- (int)privateStatus;
- (void)setPrivateStatus:;
- (BOOL)allowShare;
- (void)setAwemeId:;
- (id)awemeId;
- (id)reviewResult;
- (BOOL)isProhibited;
- (int)userStatusFiltered;
- (int)videoHideSearch;
- (void)setVideoHideSearch:;
- (int)partSee;
- (void)setPartSee:;
- (void)setAllowShare:;
- (void)setAllowComment:;
- (BOOL)allowComment;
- (BOOL)allowFriendRecommend;
- (BOOL)allowSelfRecommendToFriend;
- (BOOL)allowFriendRecommendGuide;
- (void)setUserStatusFiltered:;
- (BOOL)inReviewing;
- (void)setIsProhibited:;
- (long long)listenVideoStatus;
- (void)setListenVideoStatus:;
- (id)awemeEditInfo;
- (void)setAwemeEditInfo:;
- (int)musicEditStatus;
- (void)setMusicEditStatus:;
- (id)videoMute;
- (void)setVideoMute:;
- (BOOL)isDelete;
- (void)setIsDelete:;
- (BOOL)isPrivate;
- (void).cxx_destruct;
- (void)setIsPrivate:;
- (int)reviewed;
- (long long)itemVersion;
- (void)setItemVersion:;
- (long long)downloadStatus;
- (void)setDownloadStatus:;
- (long long)userStatus;
- (void)setReviewed:;
- (void)setUserStatus:;
- (BOOL)withGoods;
- (void)setWithGoods:;
- (BOOL)withFusionGoods;
- (BOOL)selfSee;
- (void)setSelfSee:;
- (int)dontShareStatus;
- (BOOL)yummeHitN1;
- (void)setYummeHitN1:;
- (void)setInReviewing:;
- (void)setReviewResult:;
- (void)setAllowFriendRecommend:;
- (void)setAllowSelfRecommendToFriend:;
- (void)setAllowFriendRecommendGuide:;
- (void)setWithFusionGoods:;
- (void)setDontShareStatus:;
- (BOOL)reviewedFriendSee;
- (void)setReviewedFriendSee:;
+ (id)JSONKeyPathsByPropertyKey;
@end
