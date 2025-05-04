@interface AWEHomePageChannelChangePerfMetricsMonitorSessionParams : NSObject
@property (nonatomic) NSArray events;
@property (nonatomic) NSString session;
@property (nonatomic) BOOL disableEndDispatch;
- (id)initDisableDispatchInstanceWithEvents:session:;
- (id)initDefaultDispatchInstanceWithEvents:session:;
- (void)setDisableEndDispatch:;
- (BOOL)disableEndDispatch;
- (id)initWithEvents:session:disableEndDispatch:;
- (void)setEvents:;
- (void)setSession:;
- (id)events;
- (id)session;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
