@interface SAIntentGroupRunSiriKitExecutorCompleted : SABaseCommand
@property (nonatomic) BOOL needsServerExecution;
@property (nonatomic) BOOL needsUserInput;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)needsServerExecution;
- (void)setNeedsServerExecution:;
- (BOOL)needsUserInput;
- (void)setNeedsUserInput:;
+ (id)runSiriKitExecutorCompleted;
+ (id)runSiriKitExecutorCompletedWithDictionary:context:;
@end
