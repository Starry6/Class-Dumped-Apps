@interface PLBackgroundJobStatusRegistrationEvent : PLBackgroundJobStatusEvent
@property (nonatomic) BOOL registeredActivity;
@property (nonatomic) NSString registeredPriorities;
@property (nonatomic) NSArray workersResponsible;
- (BOOL)registeredActivity;
- (id)workersResponsible;
- (void)setRegisteredActivity:;
- (void)setWorkersResponsible:;
- (void).cxx_destruct;
- (id)statusDump;
- (void)setRegisteredPriorities:;
- (id)registeredPriorities;
@end
