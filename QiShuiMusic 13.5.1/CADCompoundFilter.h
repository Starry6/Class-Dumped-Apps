@interface CADCompoundFilter : CADFilter
@property (nonatomic) NSArray filters;
@property (nonatomic) q operation;
- (BOOL)ekPredicateFilterMatches:;
- (id)filters;
- (long long)operation;
- (BOOL)validate;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithFilters:operation:;
- (BOOL)applicableToEntityType:;
- (id)extendWhereClause:usingOperation:withValues:andTypes:;
+ (BOOL)supportsSecureCoding;
@end
