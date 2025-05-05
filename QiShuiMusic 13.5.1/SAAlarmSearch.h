@interface SAAlarmSearch : SADomainCommand
@property (nonatomic) NSNumber enabled;
@property (nonatomic) NSArray frequency;
@property (nonatomic) NSNumber hour;
@property (nonatomic) NSURL identifier;
@property (nonatomic) NSNumber includesSleepAlarms;
@property (nonatomic) NSString label;
@property (nonatomic) NSNumber minute;
- (id)minute;
- (id)hour;
- (void)setMinute:;
- (void)setHour:;
- (id)frequency;
- (id)groupIdentifier;
- (void)setFrequency:;
- (id)enabled;
- (id)identifier;
- (void)setLabel:;
- (id)label;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setEnabled:;
- (void)setIdentifier:;
- (BOOL)mutatingCommand;
- (id)includesSleepAlarms;
- (void)setIncludesSleepAlarms:;
+ (id)search;
+ (id)searchWithDictionary:context:;
@end
