@interface EFSQLAggregateFunction : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSArray arguments;
@property (nonatomic) NSString ef_SQLExpression;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ef_SQLIsolatedExpression;
- (id)ef_SQLExpression;
- (void)ef_renderSQLExpressionInto:;
- (id)arguments;
- (id)initWithName:arguments:;
- (void).cxx_destruct;
- (id)name;
+ (id)maxDistinct:;
+ (id)totalDistinct:;
+ (id)total:;
+ (id)avg:;
+ (id)sum:;
+ (id)minDistinct:;
+ (id)sumDistinct:;
+ (id)avgDistinct:;
+ (id)count:;
+ (id)min:;
+ (id)groupConcat:separator:;
+ (id)max:;
+ (id)countDistinct:;
@end
