@interface CADFilter : NSObject
- (BOOL)ekPredicateFilterMatches:;
- (BOOL)validate;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)applicableToEntityType:;
- (id)extendWhereClause:usingOperation:withValues:andTypes:;
+ (BOOL)supportsSecureCoding;
@end
