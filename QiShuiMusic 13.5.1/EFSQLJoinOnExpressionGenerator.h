@interface EFSQLJoinOnExpressionGenerator : NSObject
@property (nonatomic) NSString table;
@property (nonatomic) NSString tableAlias;
@property (nonatomic) NSString columns;
- (id)columns;
- (id)table;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithTable:tableAlias:columns:;
- (BOOL)isEqualToJoinOnExpressonGenerator:;
- (id)joinOnExpression;
- (id)tableAlias;
@end
