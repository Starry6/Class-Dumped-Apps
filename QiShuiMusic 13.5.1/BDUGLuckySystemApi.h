@interface BDUGLuckySystemApi : NSObject
- (long long)_lucky_authorizationStatusForEntityType:error:forBPEAScene:;
- (long long)_lucky_authorizationStatusForEntityType:error:paramModel:method:forBPEAScene:;
- (long long)lucky_authorizationStatusForEntityType:error:forBPEAScene:;
- (long long)lucky_authorizationStatusForEntityType:error:paramModel:method:forBPEAScene:;
- (id)lucky_calendarsForEntityType:eventStore:error:forBPEAScene:;
- (id)lucky_calendarsForEntityType:eventStore:error:paramModel:method:forBPEAScene:;
- (id)lucky_eventsMatchingPredicate:eventStore:error:forBPEAScene:;
- (id)lucky_eventsMatchingPredicate:eventStore:error:paramModel:method:forBPEAScene:;
- (BOOL)lucky_openURL:forBPEAScene:;
- (void)lucky_openURL:options:completionHandler:forBPEAScene:;
- (void)lucky_openURL:options:completionHandler:paramModel:method:forBPEAScene:;
- (BOOL)lucky_openURL:paramModel:method:forBPEAScene:;
- (id)lucky_predicateForEventsWithStartDate:endDate:calendars:eventStore:error:forBPEAScene:;
- (id)lucky_predicateForEventsWithStartDate:endDate:calendars:eventStore:error:paramModel:method:forBPEAScene:;
- (void)lucky_readPasteboardWithCompletion:forBPEAScene:;
- (void)lucky_readPasteboardWithCompletion:paramModel:method:forBPEAScene:;
- (BOOL)lucky_removeEvent:span:eventStore:error:forBPEAScene:;
- (BOOL)lucky_removeEvent:span:eventStore:error:paramModel:method:forBPEAScene:;
- (void)lucky_requestAccessCameraWithCompletion:forBPEAScene:;
- (void)lucky_requestAccessCameraWithCompletion:paramModel:method:forBPEAScene:;
- (void)lucky_requestAccessMicrophoneWithCompletion:forBPEAScene:;
- (void)lucky_requestAccessMicrophoneWithCompletion:paramModel:method:forBPEAScene:;
- (void)lucky_requestAccessToEntityType:eventStore:completion:forBPEAScene:;
- (void)lucky_requestAccessToEntityType:eventStore:completion:paramModel:method:forBPEAScene:;
- (void)lucky_requestAuthorizationForAccessLevel:completion:forBPEAScene:;
- (void)lucky_requestAuthorizationForAccessLevel:completion:paramModel:method:forBPEAScene:;
- (void)lucky_requestAuthorizationWithCompletion:forBPEAScene:;
- (void)lucky_requestAuthorizationWithCompletion:paramModel:method:forBPEAScene:;
- (BOOL)lucky_saveEvent:span:eventStore:error:forBPEAScene:;
- (BOOL)lucky_saveEvent:span:eventStore:error:paramModel:method:forBPEAScene:;
- (void)lucky_writePasteboard:withCompletion:forBPEAScene:;
- (void)lucky_writePasteboard:withCompletion:paramModel:method:forBPEAScene:;
+ (void)__sendPrivacyActionTrackWithEntry:hostImpl:forBPEAScene:;
+ (void)__sendPrivacyActionTrackWithEntry:hostImpl:paramModel:method:forBPEAScene:;
+ (id)__urlForBDXBridgeContext:;
+ (id)sharedInstance;
@end
