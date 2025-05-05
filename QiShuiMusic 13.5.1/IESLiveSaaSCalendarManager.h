@interface IESLiveSaaSCalendarManager : NSObject
@property (nonatomic) EKEventStore eventStore;
@property (nonatomic) <IESLiveSaaSKVStore> kvStore;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) <IESLiveSaaSCalendarService> service;
- (void)cancelCalendarEvent:completionBlock:;
- (BOOL)checkPrivacyDisable:;
- (void)createCalendarEvent:completionBlock:;
- (void)eventStore:requestAccessToEntityType:completion:;
- (void)getCalendarEvent:completionBlock:;
- (BOOL)isParamsValid:;
- (void)operateCalendarWithAction:completionBlock:;
- (void)requestAccessToEntity:action:completionBlock:;
- (void)setTrackContext:;
- (id)trackContext;
- (void)setKvStore:;
- (id)kvStore;
- (void)setService:;
- (id)init;
- (id)eventStore;
- (id)service;
- (void)setEventStore:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
