@interface BMDSLTableSQLQueryTransform : BMDSLBaseCodable
@property (nonatomic) NSArray tableNames;
@property (nonatomic) NSString SQL;
@property (nonatomic) BMTableSchema schema;
- (id)schema;
- (id)SQL;
- (id)initWithCoder:;
- (id)transformInput:combinedState:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithName:version:SQL:tableNames:schema:;
- (id)initWithSQL:tableNames:schema:;
- (id)tableNames;
+ (BOOL)supportsSecureCoding;
@end
