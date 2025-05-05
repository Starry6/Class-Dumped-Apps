@interface BDXBridgeCalendarManager : NSObject
@property (nonatomic) EKEventStore eventStore;
@property (nonatomic) NSUserDefaults userDefaults;
- (void)createEventWithBizParamModel:completionHandler:;
- (void)deleteEventWithBizID:completionHandler:;
- (void)readEventWithBizID:completionHandler:;
- (void)requestAccessWithActionHandler:completionHandler:;
- (void)setUserDefaults:;
- (id)eventStore;
- (id)userDefaults;
- (void)setEventStore:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
