@interface CEMClassroomUnlockUserAccountCommand : CEMCommandBase
@property (nonatomic) NSString payloadUserName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)mustBeSupervised;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (int)executionLevel;
- (id)payloadUserName;
- (void)setPayloadUserName:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:withUserName:;
+ (id)buildWithIdentifier:withUserName:;
@end
