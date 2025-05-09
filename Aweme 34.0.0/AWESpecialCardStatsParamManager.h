@interface AWESpecialCardStatsParamManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_semaphore> videoInfoSemaphore;
@property (nonatomic) BOOL videoInfoFlag;
@property (nonatomic) BOOL preIsFeedCardTemplate;
@property (nonatomic) NSString preFeedCardBusinessID;
@property (nonatomic) NSString preFeedCardBusinessExtra;
@property (nonatomic) NSString preMainCardType;
@property (nonatomic) NSString preMainContainerType;
@property (nonatomic) NSArray preFeedCardSlideVideoInfo;
@property (nonatomic) NSString preFeedCardTemplateEnterFrom;
@property (nonatomic) q tapTotalEnterStayTime;
@property (nonatomic) q tapClickLastShowTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)preIsFeedCardTemplate;
- (id)preFeedCardBusinessID;
- (id)preFeedCardBusinessExtra;
- (id)preMainCardType;
- (id)preMainContainerType;
- (id)preFeedCardTemplateEnterFrom;
- (long long)tapTotalEnterStayTime;
- (long long)tapClickLastShowTime;
- (id)preFeedCardSlideVideoInfo;
- (void)setPreIsFeedCardTemplate:;
- (void)setPreFeedCardBusinessID:;
- (void)setPreFeedCardBusinessExtra:;
- (void)setTapClickLastShowTime:;
- (void)setTapTotalEnterStayTime:;
- (void)setFlagForVideoInfo:;
- (void)configPreVideoInfo:;
- (void)setVideoInfoSemaphore:;
- (void)setVideoInfoFlag:;
- (BOOL)videoInfoFlag;
- (void)setPreMainCardType:;
- (void)setPreMainContainerType:;
- (void)setPreFeedCardSlideVideoInfo:;
- (void)setPreFeedCardTemplateEnterFrom:;
- (id)videoInfoSemaphore;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
