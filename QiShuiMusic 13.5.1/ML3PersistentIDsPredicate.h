@interface ML3PersistentIDsPredicate : ML3Predicate
@property (nonatomic) BOOL shouldContain;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:entityClass:;
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (BOOL)shouldContain;
- (id)initWithPersistentIDs:shouldContain:;
+ (BOOL)supportsSecureCoding;
+ (id)predicateWithPersistentIDs:count:shouldContain:;
+ (id)predicateWithPersistentIDs:shouldContain:;
@end
