@interface SAAlarmSnippet : SAUISnippet
@property (nonatomic) NSArray alarms;
- (id)groupIdentifier;
- (id)alarms;
- (void)setAlarms:;
- (id)encodedClassName;
+ (id)snippet;
+ (id)snippetWithDictionary:context:;
@end
