@interface AFPluginBundle : NSObject
@property (nonatomic) # factoryClass;
@property (nonatomic) @ factoryInstance;
@property (nonatomic) NSMutableDictionary classIdentifiers;
- (id)init;
- (void).cxx_destruct;
- (void)registerClassIdentifier:forDomain:inGroup:;
- (BOOL)supportsClassIdentifier:forDomainKey:groupIdentifier:;
- (Class)factoryClass;
- (void)setFactoryClass:;
- (id)factoryInstance;
- (void)setFactoryInstance:;
- (id)classIdentifiers;
- (void)setClassIdentifiers:;
@end
