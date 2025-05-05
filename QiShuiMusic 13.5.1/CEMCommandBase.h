@interface CEMCommandBase : CEMPayloadBase
@property (nonatomic) NSString commandType;
@property (nonatomic) NSString commandIdentifier;
@property (nonatomic) NSString commandDescription;
@property (nonatomic) NSNumber commandRequiresNetworkTether;
@property (nonatomic) CEMAnyPayload commandPayload;
- (id)commandType;
- (void).cxx_destruct;
- (void)setCommandType:;
- (id)serialize;
- (id)copyWithZone:;
- (id)commandDescription;
- (id)commandIdentifier;
- (void)setCommandIdentifier:;
- (id)serializeAsDataWithError:;
- (BOOL)mustBeSupervised;
- (int)executionLevel;
- (BOOL)loadCommandFromDictionary:error:;
- (void)setCommandDescription:;
- (id)commandRequiresNetworkTether;
- (void)setCommandRequiresNetworkTether:;
- (id)commandPayload;
- (void)setCommandPayload:;
+ (id)commandForPayload:error:;
+ (id)commandForData:error:;
@end
