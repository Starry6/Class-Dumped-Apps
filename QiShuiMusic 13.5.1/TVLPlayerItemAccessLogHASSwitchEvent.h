@interface TVLPlayerItemAccessLogHASSwitchEvent : TVLPlayerItemLogEvent
@property (nonatomic) NSString fromResolution;
@property (nonatomic) NSString toResolution;
@property (nonatomic) NSError error;
- (void)HASSwitchResolutionFrom:to:error:;
- (id)fromResolution;
- (id)toResolution;
- (id)error;
- (void).cxx_destruct;
@end
