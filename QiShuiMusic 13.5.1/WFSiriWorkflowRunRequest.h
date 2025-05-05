@interface WFSiriWorkflowRunRequest : WFWorkflowRunRequest
@property (nonatomic) NSArray airPlayRouteIDs;
@property (nonatomic) q executionContext;
- (void)setExecutionContext:;
- (long long)executionContext;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithExecutionContext:airPlayRouteIDs:;
- (id)airPlayRouteIDs;
- (void)setAirPlayRouteIDs:;
+ (BOOL)supportsSecureCoding;
@end
