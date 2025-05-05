@interface SACFAbstractClientCommandCompleted : SABaseCommand
@property (nonatomic) NSArray outputLogs;
@property (nonatomic) NSString results;
@property (nonatomic) q status;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStatus:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)results;
- (id)encodedClassName;
- (long long)status;
- (void)setResults:;
- (id)outputLogs;
- (void)setOutputLogs:;
+ (id)abstractClientCommandCompleted;
+ (id)abstractClientCommandCompletedWithDictionary:context:;
@end
