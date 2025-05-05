@interface SAReminderUserActivityPayload : AceObject
@property (nonatomic) SAUserActivity userActivity;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)userActivity;
- (void)setUserActivity:;
+ (id)userActivityPayload;
+ (id)userActivityPayloadWithDictionary:context:;
@end
