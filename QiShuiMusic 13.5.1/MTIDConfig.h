@interface MTIDConfig : NSObject
@property (nonatomic) NSString performanceTopic;
@property (nonatomic) NSMutableDictionary cache;
@property (nonatomic) NSMutableDictionary userIdNamespacesByTopic;
@property (nonatomic) NSMutableDictionary clientIdNamespacesByTopic;
@property (nonatomic) NSString defaultUserIdNamespace;
@property (nonatomic) NSString defaultClientIdNamespace;
- (id)initWithDictionary:;
- (void)setCache:;
- (void).cxx_destruct;
- (id)cache;
- (id)dictionaryRepresentation;
- (id)schemeForNamespace:;
- (id)namespaceForTopic:idType:;
- (unsigned long long)calculateCombinedHashForNamespaces:;
- (id)allKnownSchemes;
- (id)performanceTopic;
- (void)setPerformanceTopic:;
- (id)userIdNamespacesByTopic;
- (void)setUserIdNamespacesByTopic:;
- (id)clientIdNamespacesByTopic;
- (void)setClientIdNamespacesByTopic:;
- (id)defaultUserIdNamespace;
- (void)setDefaultUserIdNamespace:;
- (id)defaultClientIdNamespace;
- (void)setDefaultClientIdNamespace:;
@end
