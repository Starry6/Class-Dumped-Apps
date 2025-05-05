@interface CKMultiValueMergeableDeltaRegister : CKMultiValueRegister
@property (nonatomic) NSMutableDictionary timestampToContents;
@property (nonatomic) NSData salt;
@property (nonatomic) CKMultiValueMergeableDeltaRegisterState persistedState;
@property (nonatomic) NSArray contents;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)CKDescribePropertiesUsing:;
- (id)salt;
- (void)setContents:;
- (id)persistedState;
- (void).cxx_destruct;
- (id)initWithIdentifier:vector:contents:error:;
- (id)siteIdentifier;
- (BOOL)mergeDeltas:error:;
- (id)mergeableDeltasForMetadata:error:;
- (id)stateVector;
- (unsigned long long)deltaDeliveryRequirements;
- (id)initWithPersistedState:contents:error:;
- (id)installationIdentifier;
- (unsigned long long)modifierLimitForInstallationIdentifierCheck;
- (BOOL)checkElementType:error:;
@end
