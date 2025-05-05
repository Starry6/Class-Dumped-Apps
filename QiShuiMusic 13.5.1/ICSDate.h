@interface ICSDate : ICSProperty
@property (nonatomic) NSString tzid;
- (id)components;
- (id)description;
- (id)initWithValue:;
- (id)initWithYear:month:day:hour:minute:second:timeZone:;
- (BOOL)hasTimeComponent;
- (id)initWithYear:month:day:hour:minute:second:;
- (id)initWithYear:month:day:;
- (BOOL)hasFloatingTimeZone;
- (id)tzid;
- (void)setTzid:;
- (id)parametersToIncludeForChecksumVersion:;
@end
