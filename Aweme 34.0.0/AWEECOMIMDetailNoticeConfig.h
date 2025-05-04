@interface AWEECOMIMDetailNoticeConfig : MTLModel
@property (nonatomic) Q style;
@property (nonatomic) BOOL enablePushTipsRemoveRule;
@property (nonatomic) q exposeTimes;
@property (nonatomic) double exposeRefreshTime;
@property (nonatomic) q exposeTimesDisappearForever;
@property (nonatomic) double closeRefreshTime;
@property (nonatomic) q closeTimesDisappearForever;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enablePushTipsRemoveRule;
- (void)setEnablePushTipsRemoveRule:;
- (long long)exposeTimes;
- (void)setExposeTimes:;
- (double)exposeRefreshTime;
- (void)setExposeRefreshTime:;
- (long long)exposeTimesDisappearForever;
- (void)setExposeTimesDisappearForever:;
- (double)closeRefreshTime;
- (void)setCloseRefreshTime:;
- (long long)closeTimesDisappearForever;
- (void)setCloseTimesDisappearForever:;
- (unsigned long long)style;
- (void)setStyle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
