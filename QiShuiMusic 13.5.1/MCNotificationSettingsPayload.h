@interface MCNotificationSettingsPayload : MCPayload
@property (nonatomic) NSArray notificationSettings;
- (void).cxx_destruct;
- (id)notificationSettings;
- (void)setNotificationSettings:;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)validatedNotificationSettings:outError:;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
