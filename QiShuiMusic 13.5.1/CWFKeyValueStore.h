@interface CWFKeyValueStore : NSObject
@property (nonatomic) BOOL activated;
@property (nonatomic) q type;
@property (nonatomic) NSString identifier;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) @? eventHandler;
- (void)setObject:forKey:;
- (void)removeAllEntries;
- (void)addEntriesFromDictionary:;
- (id)identifier;
- (void)setEventHandler:;
- (BOOL)synchronize;
- (id)__debugDescriptionForType:;
- (BOOL)isActivated;
- (long long)type;
- (id)eventHandler;
- (BOOL)__synchronize;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (void)setActivated:;
- (id)dictionaryRepresentation;
- (id)initWithType:identifier:;
- (void)invalidate;
- (void)__ubiquitousKVSChanged:;
- (void)activate;
@end
