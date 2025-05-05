@interface AMSTimeout : NSObject
@property (nonatomic) <AMSTimeoutClockSource> clockSource;
@property (nonatomic) double expirationTimestamp;
@property (nonatomic) double timestampAtPreviousQuery;
@property (nonatomic) BOOL expired;
- (BOOL)hasExpired;
- (void).cxx_destruct;
- (id)initWithExpiration:clockSource:;
- (id)clockSource;
- (void)setClockSource:;
- (double)expirationTimestamp;
- (void)setExpirationTimestamp:;
- (double)timestampAtPreviousQuery;
- (void)setTimestampAtPreviousQuery:;
+ (id)timeoutWithExpiration:;
@end
