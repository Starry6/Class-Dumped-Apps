@interface AWEIMPrivacyInfoManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aliasWithUser:scene:;
- (id)displayNameWithUser:conversationID:scene:;
- (id)displayNameWithUser:scene:;
+ (id)sharedIMPrivacyInfoManager;
@end
