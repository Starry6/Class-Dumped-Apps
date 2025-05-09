@interface AWENotificationModelNew : IESIMBaseApiModel
@property (nonatomic) NSNumber noticeID;
@property (nonatomic) q type;
@property (nonatomic) NSNumber createTime;
@property (nonatomic) AWEDiggNotificationModel diggNotice;
@property (nonatomic) AWECommentNotificationModel commentNotice;
@property (nonatomic) AWEFollowNotificationModel followNotice;
@property (nonatomic) AWEForwardNotificationModel forwardNotice;
@property (nonatomic) AWEShopNoticeModel shopNotice;
@property (nonatomic) NSNumber userID;
@property (nonatomic) AWEAtNotificationModel atNotice;
@property (nonatomic) AWEFansPushNotificationModel fansPushNotice;
@property (nonatomic) AWEVoteNotificationModel voteNotice;
@property (nonatomic) q vcdAuthStatus;
@property (nonatomic) AWEAccountMigrateNoticeModel accountMigrateNotice;
@property (nonatomic) BOOL hasRead;
@property (nonatomic) AWEGeneralNoticeStructModel generalNotice;
@property (nonatomic) AWEViewHistoryNotificationModel viewHistoryNotice;
@property (nonatomic) AWERecommendPersonNotificationModel recommendNotice;
@property (nonatomic) AWEVisitorNotificationModel visitorNotice;
@property (nonatomic) BOOL isUnread;
@property (nonatomic) NSArray disturbModels;
@property (nonatomic) NSArray tabModels;
@property (nonatomic) NSArray noticeConfigs;
@property (nonatomic) NSString tabName;
@property (nonatomic) NSString timeline;
@property (nonatomic) q lastReadTime;
@property (nonatomic) NSString processId;
- (id)as_displayTitle;
- (id)recommendNotice;
- (id)accountMigrateNotice;
- (id)as_diggContent;
- (id)as_fansAndFollowRequestRecommendText;
- (id)atNotice;
- (id)commentModel;
- (id)commentNotice;
- (id)diggNotice;
- (id)disturbModels;
- (id)fansPushNotice;
- (id)followNotice;
- (id)forwardNotice;
- (id)generalNotice;
- (long long)lastReadTime;
- (id)noticeConfigs;
- (id)noticeID;
- (void)requestNoticeID:requestTag:requestExtra:requestValue:result:;
- (void)setAccountMigrateNotice:;
- (void)setAtNotice:;
- (void)setCommentNotice:;
- (void)setDiggNotice:;
- (void)setDisturbModels:;
- (void)setFansPushNotice:;
- (void)setFollowNotice:;
- (void)setForwardNotice:;
- (void)setGeneralNotice:;
- (void)setHasRead:;
- (void)setIsUnread:;
- (void)setLastReadTime:;
- (void)setNoticeConfigs:;
- (void)setNoticeID:;
- (void)setRecommendNotice:;
- (void)setShopNotice:;
- (void)setTabModels:;
- (void)setVcdAuthStatus:;
- (void)setViewHistoryNotice:;
- (void)setVisitorNotice:;
- (void)setVoteNotice:;
- (id)shopNotice;
- (id)tabModels;
- (long long)vcdAuthStatus;
- (id)viewHistoryNotice;
- (id)visitorNotice;
- (id)voteNotice;
- (id)userID;
- (id)processId;
- (id)createTime;
- (void)setType:;
- (void)setProcessId:;
- (BOOL)isUnread;
- (id)timeline;
- (long long)type;
- (void).cxx_destruct;
- (void)setCreateTime:;
- (void)setTimeline:;
- (void)setUserID:;
- (void)setTabName:;
- (id)tabName;
- (BOOL)hasRead;
+ (id)accountMigrateNoticeJSONTransformer;
+ (id)atNoticeJSONTransformer;
+ (id)commentNoticeJSONTransformer;
+ (id)diggNoticeJSONTransformer;
+ (id)fansPushNoticeJSONTransformer;
+ (id)followNoticeJSONTransformer;
+ (id)forwardNoticeJSONTransformer;
+ (id)generalNoticeJSONTransformer;
+ (id)recommendNoticeJSONTransformer;
+ (id)shopNoticeJSONTransformer;
+ (id)viewHistoryNoticeJSONTransformer;
+ (id)visitorNoticeJSONTransformer;
+ (id)voteNoticeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
