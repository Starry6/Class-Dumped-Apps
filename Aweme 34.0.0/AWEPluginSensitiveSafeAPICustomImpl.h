@interface AWEPluginSensitiveSafeAPICustomImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)p_jumpSceneFromJumpType:;
- (unsigned long long)p_aweJumpTypeFromBdpJumpType:;
- (unsigned long long)typeWithApiName:;
- (void)requestAccessMicrophoneWithCompletionHandler:;
- (void)requestAccessVideoWithAppId:apiName:completionHandler:;
- (BOOL)startRunningWithCaptureSession:appId:apiName:error:;
- (BOOL)stopRunningWithCaptureSession:appId:apiName:error:;
- (BOOL)setPasteboardString:error:appId:apiName:;
- (void)getPasteboardStringWithCompletionHandler:appId:apiName:;
- (void)openURL:options:completionHandler:type:appId:apiName:;
- (id)getSKStoreWithError:appId:apiName:;
- (id)getPredicateWithStartDate:endDate:calendars:eventStore:error:appId:apiName:;
- (id)getEventsMatchingPredicate:eventStore:error:appId:apiName:;
- (long long)getCalendarAuthorizationStatusWithError:appId:apiName:;
- (void)requestAccessCalendarWithEventStore:completion:;
- (BOOL)saveCalendarEvent:eventStore:error:appId:apiName:;
- (BOOL)removeCalendarEvent:eventStore:error:appId:apiName:;
- (id)getCalendarsForEventStore:error:appId:apiName:;
+ (id)sharedPlugin;
@end
