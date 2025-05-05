@interface SAPunchoutOutcome : SABaseCommand
@property (nonatomic) NSString originalCommandId;
@property (nonatomic) NSDictionary outcomes;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setOutcomes:;
- (id)originalCommandId;
- (void)setOriginalCommandId:;
- (id)outcomes;
+ (id)punchoutOutcome;
+ (id)punchoutOutcomeWithDictionary:context:;
@end
