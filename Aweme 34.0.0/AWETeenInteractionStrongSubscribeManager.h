@interface AWETeenInteractionStrongSubscribeManager : NSObject
@property (nonatomic) NSMutableArray authorIDArr;
@property (nonatomic) q maxShowTimes;
@property (nonatomic) q maxSubscribedCount;
@property (nonatomic) q showAtPlayTimes;
@property (nonatomic) double showAtPlayProgress;
@property (nonatomic) BOOL isShowing;
- (BOOL)canShowWithModel:;
- (long long)maxShowTimes;
- (void)setMaxShowTimes:;
- (void)p_config;
- (long long)maxSubscribedCount;
- (id)authorIDArr;
- (BOOL)p_canShowRecordOnToday;
- (void)setMaxSubscribedCount:;
- (void)setShowAtPlayTimes:;
- (void)setShowAtPlayProgress:;
- (void)showStrongSubscribeWithModel:;
- (void)notShowWithAuthorID:;
- (long long)showAtPlayTimes;
- (double)showAtPlayProgress;
- (void)setAuthorIDArr:;
- (BOOL)isShowing;
- (void).cxx_destruct;
- (void)setIsShowing:;
+ (id)subscribeConfig;
+ (id)sharedInstance;
@end
