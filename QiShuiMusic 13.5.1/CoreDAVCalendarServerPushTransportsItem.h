@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem
@property (nonatomic) NSMutableSet transports;
- (id)init;
- (void)addTransport:;
- (void).cxx_destruct;
- (id)transports;
- (id)description;
- (void)setTransports:;
+ (id)copyParseRules;
@end
