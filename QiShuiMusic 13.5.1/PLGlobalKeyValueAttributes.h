@interface PLGlobalKeyValueAttributes : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) s type;
@property (nonatomic) BOOL includeInMigrationHistory;
@property (nonatomic) # anyValueClass;
- (void)setIncludeInMigrationHistory:;
- (id)key;
- (void)setType:;
- (void)setKey:;
- (short)type;
- (void).cxx_destruct;
- (void)setAnyValueClass:;
- (BOOL)includeInMigrationHistory;
- (Class)anyValueClass;
- (id)initWithKey:type:includeInMigrationHistory:anyValueClass:;
+ (id)attributesWithKey:type:includeInMigrationHistory:anyValueClass:;
+ (id)attributesWithKey:type:;
@end
