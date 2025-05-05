@interface EDWidgetUpdateController : NSObject
@property (nonatomic) NSArray timelineControllers;
@property (nonatomic) NSDate lastUpdate;
@property (nonatomic) q numberOfUpdates;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lastUpdate;
- (void)dealloc;
- (long long)numberOfUpdates;
- (void)_refreshTimelinesWithReason:;
- (id)timelineControllers;
- (void)persistenceDidAddMessages:generationWindow:;
- (void)persistenceDidChangeFlags:messages:generationWindow:;
- (void)setNumberOfUpdates:;
- (void)_writeUserDefaults;
- (void).cxx_destruct;
- (id)initWithWidgetBundleIdentifier:widgetKindIdentifiers:hookRegistry:;
- (long long)_activityDelay;
- (void)_restoreFromUserDefaults;
- (void)_runActivity;
- (void)_scheduleActivityWithReason:;
- (void)setLastUpdate:;
- (void)setTimelineControllers:;
- (void)_updateLastUpdateInformation;
+ (id)log;
@end
