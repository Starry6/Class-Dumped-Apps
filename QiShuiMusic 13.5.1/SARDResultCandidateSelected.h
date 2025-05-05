@interface SARDResultCandidateSelected : SABaseCommand
@property (nonatomic) SARDNativeFlowContextUpdate nativeFlowContextUpdate;
@property (nonatomic) NSString selectedResultCandidateId;
@property (nonatomic) BOOL serverFallback;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)nativeFlowContextUpdate;
- (void)setNativeFlowContextUpdate:;
- (id)selectedResultCandidateId;
- (void)setSelectedResultCandidateId:;
- (BOOL)serverFallback;
- (void)setServerFallback:;
+ (id)resultCandidateSelected;
+ (id)resultCandidateSelectedWithDictionary:context:;
@end
