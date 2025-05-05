@interface CSJAdViewWitnessChecker : NSObject
@property (nonatomic) BUThreadSafeDictionary viewTrackers;
@property (nonatomic) NSMutableDictionary adViewsWitnessTimeDictionary;
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) NSObject<OS_dispatch_queue> checkQueue;
- (void)removeAdForKey:;
- (void)addViewTracker:;
- (id)adViewsWitnessTimeDictionary;
- (void)addViewTracker:ForKey:;
- (void)checkAdViewsIfWitnessed;
- (void)checkoutViewTracker;
- (void)dismissEventWithTracker:;
- (void)removeAd:;
- (void)setAdViewsWitnessTimeDictionary:;
- (void)setViewTrackers:;
- (void)showEventWithTracker:;
- (id)viewTrackers;
- (id)checkQueue;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
- (void)setCheckQueue:;
+ (id)dictionaryKeyWithObject:;
+ (double)getWitnessTimeForAd:;
+ (void)setWitnessTimeForAd:;
+ (id)sharedInstance;
@end
