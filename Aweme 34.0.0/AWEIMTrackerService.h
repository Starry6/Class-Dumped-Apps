@interface AWEIMTrackerService : NSObject
@property (nonatomic) NSMutableDictionary eventTimesDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iesim_getInstallID;
- (void)iesim_trackEvent:params:;
- (void)recordTimeForEvent:;
- (id)eventTimes;
- (BOOL)enableIMAccountTrack;
- (void)trackAccountCheckWithParams:;
- (id)eventTimesDict;
- (void)setEventTimesDict:;
- (id)init;
- (void).cxx_destruct;
@end
