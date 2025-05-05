@interface MPConcreteMediaEntityPropertiesCache : NSObject
@property (nonatomic) <MPMediaLibraryDataProvider> dataProvider;
@property (nonatomic) # dataProviderEntityClass;
@property (nonatomic) q identifier;
- (void)delete;
- (void)dealloc;
- (id)dataProvider;
- (long long)identifier;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithLibraryDataProvider:dataProviderEntityClass:identifier:;
- (id)valueForProperty:isCached:;
- (void)_cacheValues:persistValueInBackgroundBlock:;
- (void)cachePropertyValues:forProperties:persistValueInBackgroundBlock:;
- (void)cacheValue:forProperty:persistValueInBackgroundBlock:;
- (Class)dataProviderEntityClass;
@end
