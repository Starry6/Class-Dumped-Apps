@interface EMFIndexLoader : NSObject
+ (id)defaultIndexForBundle:;
+ (id)stemmedIndexForBundle:;
+ (id)_invertedIndexWithTermIndexURL:andDocumentIndexURL:fromBundle:;
+ (id)_loadDictionaryResource:;
+ (void)_inferAndApplyStrategyToIndex:;
@end
