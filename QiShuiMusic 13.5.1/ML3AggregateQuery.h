@interface ML3AggregateQuery : ML3Query
@property (nonatomic) # aggregateEntityClass;
@property (nonatomic) NSString foreignPersistentIDProperty;
@property (nonatomic) BOOL isFastCountable;
- (id)selectPersistentIDsSQLAndProperties:ordered:;
- (unsigned long long)countOfEntities;
- (Class)entityClass;
- (id)persistentIDProperty;
- (BOOL)sectionsPersistentIDColumnIsDistinct;
- (BOOL)hasEntities;
- (void)dealloc;
- (void)setIsFastCountable:;
- (id)foreignPersistentIDProperty;
- (id)initWithCoder:;
- (Class)aggregateEntityClass;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithUnitQuery:aggregateEntityClass:foreignPersistentIDProperty:;
- (BOOL)isFastCountable;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
