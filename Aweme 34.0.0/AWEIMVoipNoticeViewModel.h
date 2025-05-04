@interface AWEIMVoipNoticeViewModel : NSObject
@property (nonatomic) q rtvType;
@property (nonatomic) NSArray rtvUserUIDs;
@property (nonatomic) BOOL isFeedSharing;
@property (nonatomic) BOOL isInGaming;
@property (nonatomic) NSNumber maxSelectCount;
- (BOOL)isFeedSharing;
- (long long)rtvType;
- (BOOL)isInGaming;
- (id)maxSelectCount;
- (void)setRtvType:;
- (void)updateFeedSharing:;
- (void)updateIsInGaming:;
- (void)updateMaxSelectCount:;
- (id)makeNoticeContent;
- (id)rtvUserUIDs;
- (void)setRtvUserUIDs:;
- (void)setIsFeedSharing:;
- (void).cxx_destruct;
+ (id)noticeViewModelWithRTVType:rtvUserUIDs:;
@end
