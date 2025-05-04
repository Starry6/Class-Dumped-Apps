@interface AWEIMSchoolGroupTracker : NSObject
- (void)__trackEvent:params:;
- (void)track_createGroupVCShowWithEnterFrom:;
- (void)track_enterCreateGroup:enterFrom:enterMethod:;
- (void)track_createGroupCompleteResult:enterMethod:;
- (void)track_verifyPageShowWithConversationID:;
- (void)track_verifyPageCompletionWithConversationID:;
@end
