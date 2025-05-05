@interface EFSQLQueryGenerator : NSObject
+ (id)sqlQueryForReturnObjectKeypaths:query:propertyMapper:;
+ (id)traverseKeypath:keyPropertyMapper:previousExpressionGenerator:;
+ (id)selectExpressionGeneratorForReturnObjectKeypath:propertyMapper:;
+ (id)getChildrenFromPropertyMapper:previousTable:previousExpressionGenerator:;
+ (id)expressionGeneratorsForSortDescriptors:propertyMapper:;
+ (id)compiledSQLQueryWithPredicateNodes:selectGenerators:orderByGenerators:selectAll:;
@end
