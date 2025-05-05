@interface HTSHandleNotificationContext : NSObject
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) NSString categoryIdentifier;
@property (nonatomic) NSString actionIdentifier;
@property (nonatomic) NSString userText;
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL isColdLaunch;
- (id)initWithUserInfo:categoryIdentifier:actionIdentifier:userText:identifier:isColdLaunch:;
- (BOOL)isColdLaunch;
- (id)userInfo;
- (id)identifier;
- (id)categoryIdentifier;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (id)userText;
@end
