@interface FeedExtra : IESLivePBBaseMessage
@property (nonatomic) FeedExtra_LogPb logPb;
@property (nonatomic) BOOL hasLogPb;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q cost;
@property (nonatomic) q maxTime;
@property (nonatomic) q total;
@property (nonatomic) Banner banner;
@property (nonatomic) BOOL hasBanner;
@property (nonatomic) RankRoundBanner rankRoundBanner;
@property (nonatomic) BOOL hasRankRoundBanner;
@property (nonatomic) NSString unreadExtra;
@property (nonatomic) q searchOffset;
+ (id)descriptor;
@end
