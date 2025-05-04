@interface AWEMultiAccountNoticeCountsModel : AWEBaseApiModel
@property (nonatomic) NSNumber userID;
@property (nonatomic) NSNumber imCount;
@property (nonatomic) NSNumber noticeCount;
@property (nonatomic) BOOL isFresh;
@property (nonatomic) NSNumber lastMsgTime;
- (id)noticeCount;
- (void)setNoticeCount:;
- (id)lastMsgTime;
- (void)setLastMsgTime:;
- (id)imCount;
- (void)setImCount:;
- (void)setIsFresh:;
- (id)userID;
- (long long)totalCount;
- (void).cxx_destruct;
- (void)setUserID:;
- (BOOL)isFresh;
+ (id)JSONKeyPathsByPropertyKey;
@end
