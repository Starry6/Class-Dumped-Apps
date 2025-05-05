@interface LNFetchStructuredDataConnectionOperation : LNInterfaceConnectionOperation
@property (nonatomic) NSDictionary entityIdentifiersToStructuredData;
@property (nonatomic) @? completionHandler;
@property (nonatomic) q typeIdentifier;
@property (nonatomic) NSArray entityIdentifiers;
- (void)start;
- (void)setCompletionHandler:;
- (long long)typeIdentifier;
- (void).cxx_destruct;
- (void)finishWithError:;
- (id)completionHandler;
- (id)entityIdentifiers;
- (id)initWithConnectionInterface:typeIdentifier:entityIdentifiers:completionHandler:;
- (id)entityIdentifiersToStructuredData;
- (void)setEntityIdentifiersToStructuredData:;
@end
