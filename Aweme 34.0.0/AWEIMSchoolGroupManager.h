@interface AWEIMSchoolGroupManager : NSObject
@property (nonatomic) AWEIMSchoolGroupWebAccess webAccess;
- (id)createConversationWithContext:;
- (BOOL)schoolConversationIsVerified:;
- (id)submitIdentifierVerificationAtConversation:enterYear:collegeName:autoIntroduce:;
- (id)init;
- (id)webAccess;
- (void).cxx_destruct;
@end
