@interface SACFFlowCompleted : SACFAbstractClientCommandCompleted
@property (nonatomic) NSString domain;
@property (nonatomic) SACFProvideContext updateContext;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)domain;
- (void)setDomain:;
- (id)updateContext;
- (void)setUpdateContext:;
+ (id)flowCompleted;
+ (id)flowCompletedWithDictionary:context:;
@end
