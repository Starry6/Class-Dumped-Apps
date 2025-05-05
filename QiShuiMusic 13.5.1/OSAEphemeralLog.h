@interface OSAEphemeralLog : OSALog
- (void).cxx_destruct;
- (void)retire:;
- (id)initWithData:andMetadata:;
@end
