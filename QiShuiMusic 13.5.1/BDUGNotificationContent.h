@interface BDUGNotificationContent : NSObject
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) UNNotificationTrigger trigger;
@property (nonatomic) NSString categoryIdentifier;
@property (nonatomic) NSString actionIdentifier;
@property (nonatomic) NSString userText;
@property (nonatomic) NSString identifier;
- (void)setUserText:;
- (void)setCategoryIdentifier:;
- (id)userInfo;
- (id)identifier;
- (void)setTrigger:;
- (id)categoryIdentifier;
- (id)trigger;
- (void)setUserInfo:;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (id)userText;
- (void)setActionIdentifier:;
+ (id)contentWithUserInfo:categoryIdentifier:actionIdentifier:userText:;
+ (id)contentWithUserInfo:notificationTrigger:categoryIdentifier:actionIdentifier:userText:identifier:;
@end
