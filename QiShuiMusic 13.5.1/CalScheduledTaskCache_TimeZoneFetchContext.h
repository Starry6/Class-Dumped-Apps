@interface CalScheduledTaskCache_TimeZoneFetchContext : NSObject
@property (nonatomic) NSTimeZone previousTimeZone;
@property (nonatomic) NSTimeZone nextTimeZone;
@property (nonatomic) NSMutableDictionary dict;
- (void).cxx_destruct;
- (id)dict;
- (void)setDict:;
- (id)previousTimeZone;
- (void)setPreviousTimeZone:;
- (id)nextTimeZone;
- (void)setNextTimeZone:;
@end
