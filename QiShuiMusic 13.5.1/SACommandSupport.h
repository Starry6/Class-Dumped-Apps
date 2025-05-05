@interface SACommandSupport : AceObject
@property (nonatomic) NSString aceVersion;
@property (nonatomic) NSString commandId;
@property (nonatomic) SAObjectSupport resultSupport;
@property (nonatomic) NSURL serverEndpoint;
@property (nonatomic) NSArray supportedConstraints;
@property (nonatomic) q weight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (long long)weight;
- (void)setWeight:;
- (id)serverEndpoint;
- (void)setAceVersion:;
- (id)encodedClassName;
- (id)aceVersion;
- (id)commandId;
- (void)setCommandId:;
- (id)resultSupport;
- (void)setResultSupport:;
- (void)setServerEndpoint:;
- (id)supportedConstraints;
- (void)setSupportedConstraints:;
+ (id)commandSupport;
+ (id)commandSupportWithDictionary:context:;
@end
