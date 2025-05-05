@interface AMSNotificationSettingsItem : NSObject
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString desc;
@property (nonatomic) BOOL enabled;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL userChanged;
- (id)desc;
- (id)identifier;
- (id)initWithDictionaryRepresentation:;
- (id)title;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEnabled;
- (id)initWithTitle:description:identifier:enabled:;
- (BOOL)userChanged;
- (void)setUserChanged:;
@end
