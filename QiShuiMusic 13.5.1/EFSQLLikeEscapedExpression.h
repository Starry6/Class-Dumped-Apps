@interface EFSQLLikeEscapedExpression : NSObject
@property (nonatomic) NSString value;
@property (nonatomic) S escapeCharacter;
@property (nonatomic) Q pattern;
@property (nonatomic) NSString ef_SQLExpression;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ef_SQLIsolatedExpression;
- (id)ef_SQLExpression;
- (void)ef_renderSQLExpressionInto:;
- (unsigned short)escapeCharacter;
- (unsigned long long)pattern;
- (void).cxx_destruct;
- (id)value;
- (id)initWithValue:;
- (id)initWithValue:pattern:;
- (id)initWithValue:pattern:escapeCharacter:;
@end
