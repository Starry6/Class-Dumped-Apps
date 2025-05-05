@interface SALCMSportingEvent : SALCMContent
@property (nonatomic) NSURL sportingEventId;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)sportingEventId;
- (void)setSportingEventId:;
+ (id)sportingEvent;
+ (id)sportingEventWithDictionary:context:;
@end
