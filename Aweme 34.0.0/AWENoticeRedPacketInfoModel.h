@interface AWENoticeRedPacketInfoModel : AWEBaseApiModel
@property (nonatomic) q scene;
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) NSString openURLSchema;
@property (nonatomic) NSString noticeContent;
@property (nonatomic) NSString noticeHint;
@property (nonatomic) AWEFollowNoticeImmediatelyRewardInfoModel followNoticeImmediatelyRewardInfo;
@property (nonatomic) AWEFollowCollectToTargetInfoModel followNoticeCollectToTargetInfo;
- (id)openURLSchema;
- (id)noticeContent;
- (void)setOpenURLSchema:;
- (void)setNoticeContent:;
- (id)noticeHint;
- (void)setNoticeHint:;
- (id)followNoticeImmediatelyRewardInfo;
- (void)setFollowNoticeImmediatelyRewardInfo:;
- (id)followNoticeCollectToTargetInfo;
- (void)setFollowNoticeCollectToTargetInfo:;
- (void)setScene:;
- (void)setIconURL:;
- (long long)scene;
- (id)iconURL;
- (void).cxx_destruct;
+ (id)iconURLJSONTransformer;
+ (id)followNoticeImmediatelyRewardInfoJSONTransformer;
+ (id)followNoticeCollectToTargetInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
