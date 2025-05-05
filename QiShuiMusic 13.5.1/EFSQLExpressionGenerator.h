@interface EFSQLExpressionGenerator : NSObject
@property (nonatomic) EFSQLGeneratorTableRelationship tableRelationship;
@property (nonatomic) NSArray whereExpression;
@property (nonatomic) NSArray additionalSelectColumns;
@property (nonatomic) BOOL includeSourceColumn;
@property (nonatomic) NSString alias;
@property (nonatomic) EFSQLExpressionGenerator previousExpressionGenerator;
- (id)alias;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)setAlias:;
- (BOOL)isEqual:;
- (id)initWithTableRelationship:whereExpression:previousExpressionGenerator:;
- (id)initWithTableRelationship:whereExpression:previousExpressionGenerator:additionalSelectColumns:includeSourceColumn:;
- (void)assignAliasWithMap:;
- (id)joinOnGenerator;
- (id)columnAlias;
- (BOOL)isEqualToEFSQLExpressionGenerator:;
- (id)tableRelationship;
- (id)whereExpression;
- (id)additionalSelectColumns;
- (BOOL)includeSourceColumn;
- (void)setIncludeSourceColumn:;
- (id)previousExpressionGenerator;
+ (id)tableFromPreviousTable:propertyMapper:;
@end
