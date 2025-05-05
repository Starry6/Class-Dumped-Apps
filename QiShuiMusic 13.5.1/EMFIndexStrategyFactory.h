@interface EMFIndexStrategyFactory : NSObject
+ (id)inferStrategyForIndex:;
+ (id)defaultStrategyWithTermIndex:andDocumentIndex:;
@end
