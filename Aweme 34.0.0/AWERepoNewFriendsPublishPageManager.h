@interface AWERepoNewFriendsPublishPageManager : NSObject
@property (nonatomic) BOOL isNeededResetPrivacyTypeStatus;
- (void)setIsNeededResetPrivacyTypeStatus:;
- (BOOL)isNeededResetPrivacyTypeStatus;
+ (id)sharedInstance;
@end
