@interface AMSUserNotificationSettingsResult : NSObject
@property (nonatomic) NSString serviceIdentifier;
@property (nonatomic) NSDictionary itemsMap;
- (id)serviceIdentifier;
- (void).cxx_destruct;
- (id)initWithServiceIdentifier:dictionaryRepresentation:;
- (id)itemsMap;
+ (id)_itemsMapForServiceIdentifier:dictionaryRepresentation:;
@end
