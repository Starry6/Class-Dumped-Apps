@interface CPLTransportScopeMapping : NSObject
@property (nonatomic) <CPLTransportScopeTranslator> translator;
@property (nonatomic) Q count;
@property (nonatomic) BOOL hasStagingScopes;
- (id)translator;
- (id)redactedDescription;
- (id)initWithTranslator:;
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (void)addTransportScope:forScopeWithIdentifier:;
- (void)addConcreteScope:forScopeWithIdentifier:;
- (id)concreteScopeForScopeWithIdentifier:;
- (BOOL)hasConcreteScopeForScopeWithIdentifier:;
- (void)setSharedScopeIdentifier:forScopeWithIdentifier:;
- (BOOL)shouldSetSharedScopeIdentifierForScopeWithIdentifier:;
- (id)sharedScopeIdentifierForScopeWithIdentifier:;
- (void)enumerateConcreteScopesWithBlock:;
- (BOOL)_checkTransportScopeForScopeIdentifier:hasConcreteScope:error:;
- (BOOL)_addTransportScopeForScope:scopes:allowsTentativeTransportScope:useStagingScopeIfNecessary:error:;
- (BOOL)_addAllTransportScopesForScope:scopes:allowsTentativeTransportScope:useStagingScopeIfNecessary:error:;
- (BOOL)addTransportScopeForScopeIdentifier:scopes:useStagingScopeIfNecessary:error:;
- (BOOL)addTransportScopeForScope:scopes:allowsTentativeTransportScope:useStagingScopeIfNecessary:error:;
- (void)updateWithTransportScopeMapping:;
- (BOOL)hasStagingScopes;
@end
