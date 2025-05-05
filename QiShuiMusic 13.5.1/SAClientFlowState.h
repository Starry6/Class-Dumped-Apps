@interface SAClientFlowState : SAAceClientState
@property (nonatomic) NSDictionary cachedDomainClassJavascriptChecksumMap;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)cachedDomainClassJavascriptChecksumMap;
- (void)setCachedDomainClassJavascriptChecksumMap:;
+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)clientFlowState;
+ (id)clientFlowStateWithDictionary:context:;
@end
