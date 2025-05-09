@interface AWEIMInteractNotificationCountModel : NSObject
@property (nonatomic) q group;
@property (nonatomic) q showType;
@property (nonatomic) q count;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) NSArray noticeCount;
@property (nonatomic) NSArray notices;
@property (nonatomic) double pushTime;
@property (nonatomic) BOOL needBackup;
@property (nonatomic) NSString livePushType;
@property (nonatomic) double latestTime;
- (void)setNoticeCount:;
- (double)latestTime;
- (id)livePushType;
- (BOOL)needBackup;
- (id)noticeCount;
- (double)pushTime;
- (void)setExtra:;
- (void)setLatestTime:;
- (void)setLivePushType:;
- (void)setNeedBackup:;
- (void)setPushTime:;
- (void)setCount:;
- (id)extra;
- (void)setGroup:;
- (long long)group;
- (id)initWithDict:;
- (void).cxx_destruct;
- (long long)count;
- (long long)showType;
- (void)setShowType:;
- (id)notices;
- (void)setNotices:;
@end
