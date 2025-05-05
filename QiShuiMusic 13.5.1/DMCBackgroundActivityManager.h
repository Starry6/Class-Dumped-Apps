@interface DMCBackgroundActivityManager : NSObject
@property (nonatomic) NSMutableDictionary activities;
- (id)initPrivate;
- (id)activities;
- (void)setActivities:;
- (void).cxx_destruct;
+ (id)sharedInstance;
+ (void)cancelActivity:;
+ (void)scheduleOneShotActivity:interval:gracePeriod:callback:;
@end
