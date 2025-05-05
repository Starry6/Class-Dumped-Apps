@interface ML3DatabaseNaturalStatement : NSObject
@property (nonatomic) NSString sql;
@property (nonatomic) NSMutableArray parameters;
- (id)initWithCoder:;
- (id)parameters;
- (void)encodeWithCoder:;
- (id)sql;
- (void).cxx_destruct;
- (void)setParameters:;
- (id)initWithSQL:parameters:;
- (void)setParameter:forPosition:;
- (void)setSql:;
+ (BOOL)supportsSecureCoding;
+ (id)naturalStatementWithSQL:parameters:;
@end
