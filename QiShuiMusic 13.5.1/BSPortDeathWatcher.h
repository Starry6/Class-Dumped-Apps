@interface BSPortDeathWatcher : BSPortDeathSentinel
- (id)initWithPort:queue:deathHandler:;
- (id)initWithSendRight:queue:deathHandler:;
@end
