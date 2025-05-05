@interface FBSProcessWatchdog : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) <FBSProcess> process;
@property (nonatomic) FBSProcessWatchdogPolicy policy;
@property (nonatomic) @? completion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)completion;
- (void)setCompletion:;
- (void)dealloc;
- (void)_stopMonitoringConstraints;
- (id)policy;
- (id)initWithName:process:policy:;
- (id)succinctDescriptionBuilder;
- (void)deactivate;
- (void)_beginMonitoringConstraints;
- (id)process;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)name;
- (id)descriptionBuilderWithMultilinePrefix:;
- (void)invalidate;
- (id)descriptionWithMultilinePrefix:;
- (void)activate;
- (void)provision:wasViolatedWithError:;
@end
