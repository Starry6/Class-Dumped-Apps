@interface AWEMVChannelFeatureUploadService : HTSService
@property (nonatomic) NSMutableDictionary sessionIndexFeatureDict;
@property (nonatomic) NSDictionary sessionIndexFeatureConfigDict;
@property (nonatomic) NSMutableDictionary feedIndexFeatureDict;
@property (nonatomic) NSDictionary feedIndexFeatureConfigDict;
@property (nonatomic) NSString backForegroundItemIds;
@property (nonatomic) AWEMVChannelPageContext context;
@property (nonatomic) NSCalendar calendar;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)onAppWillEnterForeground;
- (id)sessionIndexFeatures;
- (id)feedIndexFeatures;
- (void)updateFeedIndexIfNeeded:;
- (id)singleFeatures;
- (void)setSessionIndexFeatureDict:;
- (void)setFeedIndexFeatureDict:;
- (id)parseSessionIndexFeatureConfig;
- (void)setSessionIndexFeatureConfigDict:;
- (id)parseFeedIndexFeatureConfig;
- (void)setFeedIndexFeatureConfigDict:;
- (void)updateSessionIndexFeature:;
- (id)sessionIndexFeatureDict;
- (id)sessionIndexFeatureConfigDict;
- (BOOL)isCurrentSessionDailyFirstByPreviousSessionTime:;
- (BOOL)isInTodayWithDate:;
- (id)feedIndexFeatureDict;
- (id)feedIndexFeatureConfigDict;
- (void)resetFeedIndexFeatureWhenHomeResume;
- (BOOL)enableUploadFeatures;
- (id)featureSequenceWithRequestNums:;
- (long long)feedIndexInLife;
- (id)backForegroundItemIdsFeature;
- (void)readFeedIndexInLifeFromDisk;
- (void)recordFeedIndexInLifeToDisk;
- (void)setBackForegroundItemIds:;
- (id)backForegroundItemIds;
- (void)updateBackForegroundItemIds;
- (id)mediumVideoFeaturesWithRequestNums:;
- (void)increaseFeedIndexInLife;
- (void)dealloc;
- (void)setCalendar:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)calendar;
- (id)context;
@end
