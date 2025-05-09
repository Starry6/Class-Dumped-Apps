@interface AWEDemaciaAwemeStatisticsModel : AWEBaseApiModel
@property (nonatomic) NSString itemID;
@property (nonatomic) NSNumber commentCount;
@property (nonatomic) NSNumber diggCount;
@property (nonatomic) NSNumber playCount;
@property (nonatomic) NSNumber shareCount;
@property (nonatomic) NSNumber downLoadCount;
@property (nonatomic) NSNumber repostCount;
@property (nonatomic) NSNumber loseCount;
@property (nonatomic) NSNumber loseCommentCount;
- (id)diggCount;
- (void)setDiggCount:;
- (id)downLoadCount;
- (void)setDownLoadCount:;
- (id)repostCount;
- (void)setRepostCount:;
- (id)loseCount;
- (void)setLoseCount:;
- (id)loseCommentCount;
- (void)setLoseCommentCount:;
- (id)itemID;
- (id)playCount;
- (void).cxx_destruct;
- (void)setPlayCount:;
- (void)setShareCount:;
- (id)shareCount;
- (id)commentCount;
- (void)setCommentCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
