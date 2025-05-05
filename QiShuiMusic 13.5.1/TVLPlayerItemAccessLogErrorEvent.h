@interface TVLPlayerItemAccessLogErrorEvent : TVLPlayerItemLogEvent
@property (nonatomic) NSError error;
@property (nonatomic) BOOL hasRecovered;
- (void)setError:;
- (id)error;
- (void)recover;
- (void).cxx_destruct;
- (BOOL)hasRecovered;
@end
