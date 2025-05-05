@interface MTIDCompositeSecretStore : NSObject
@property (nonatomic) NSMutableDictionary stores;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)debugInfo;
- (void).cxx_destruct;
- (id)stores;
- (void)setStores:;
- (id)maintainSchemes:options:;
- (id)secretForScheme:options:;
- (id)resetSchemes:options:;
- (void)clearLocalData;
- (id)syncForSchemes:options:;
- (id)storeKeyForScheme:;
- (id)secretStoreForScheme:;
- (id)schemesGroupedByStore:;
@end
