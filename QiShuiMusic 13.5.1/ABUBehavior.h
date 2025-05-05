@interface ABUBehavior : NSObject
@property (nonatomic) q timestamp;
@property (nonatomic) NSString pr;
@property (nonatomic) NSString adn;
@property (nonatomic) Q et;
@property (nonatomic) NSString eventID;
- (id)adn;
- (void)setAdn:;
- (unsigned long long)et;
- (id)mutableCopy:;
- (id)pr;
- (void)setEt:;
- (void)setPr:;
- (void)setEventID:;
- (id)eventID;
- (BOOL)conformsToProtocol:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (long long)timestamp;
- (id)copyWithZone:;
+ (void)getEventListWithCount:complete:;
+ (id)abu_databaseName;
+ (id)abu_primaryKey;
+ (id)abu_tableName;
+ (void)removeEvents:complete:;
+ (void)removeEventsBeforeDays:complete:;
+ (void)saveEvent:complete:;
+ (double)timeIntervalOfDaysBeforeToday:;
@end
