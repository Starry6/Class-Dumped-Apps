@interface AMSUserNotificationSettingsItem : NSObject
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSDictionary updateDictionary;
@property (nonatomic) BOOL enabled;
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL userChanged;
- (id)identifier;
- (id)initWithIdentifier:enabled:;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEnabled;
- (BOOL)userChanged;
- (void)setUserChanged:;
- (id)initWithIdentifier:dictionaryRepresentation:;
- (id)updateDictionary;
@end
