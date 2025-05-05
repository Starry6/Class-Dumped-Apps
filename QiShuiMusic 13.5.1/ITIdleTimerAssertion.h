@interface ITIdleTimerAssertion : BSSimpleAssertion
@property (nonatomic) NSString uniqueReason;
@property (nonatomic) ITIdleTimerConfiguration configuration;
- (id)succinctDescriptionBuilder;
- (id)configuration;
- (void).cxx_destruct;
- (id)_initWithConfiguration:forReason:invalidationBlock:;
- (id)_uniqueReason;
@end
