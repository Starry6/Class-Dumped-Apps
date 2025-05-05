@interface AMSNotificationSettingsSection : NSObject
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString footer;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSArray items;
@property (nonatomic) NSString title;
- (id)items;
- (id)identifier;
- (id)initWithDictionaryRepresentation:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)footer;
- (id)dictionaryRepresentation;
- (id)initWithTitle:footer:items:;
@end
