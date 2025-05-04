@interface AWEFollowListRecommendCardManager : NSObject
@property (nonatomic) Q cardStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getStoregeKeyWithOriginKey:;
- (void)followListRecommendCardClicksDates;
- (unsigned long long)followListRecommendCardStyle;
- (void)switchOffRecommendCardTimesStorage;
- (void)switchOffRecommendCardNextShowDateStorage;
- (BOOL)didMeetClickFrequcy;
- (BOOL)canShowFollowListRecommendCard;
- (void)followListRecommendCardShowDates;
- (id)init;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (unsigned long long)cardStyle;
- (void)setCardStyle:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
