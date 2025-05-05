@interface ABUAdViewWitnessChecker : NSObject
@property (nonatomic) NSMutableDictionary viewTrackers;
@property (nonatomic) NSMutableDictionary adViewsWitnessTimeDictionary;
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) NSObject<OS_dispatch_queue> checkQueue;
- (void)removeAdForKey:;
- (void)addViewTracker:;
- (id)adViewsWitnessTimeDictionary;
- (void)checkAdViewsIfWitnessed;
- (void)checkoutViewTracker;
- (void)removeAd:;
- (void)removeAllTracker;
- (void)setAdViewsWitnessTimeDictionary:;
- (void)setViewTrackers:;
- (void)setWitnessTimeForAd:;
- (void)showEventWithTracker:;
- (id)viewTrackers;
- (id)checkQueue;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
- (void)setCheckQueue:;
+ (double)getWitnessTimeForAd:;
+ (void)setWitnessTimeForAd:;
+ (id)sharedInstance;
@end
