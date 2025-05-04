@interface AWEIMFetchShareCandidateReduceDecorator : NSObject
+ (id)lowShareActiveUserInsertShareModelDecoratorWithConfig:;
+ (id)insertShareModelDecoratorWithConfig:;
+ (BOOL)insertToArray:with:atIndex:limit:replaceOld:dataSource:;
+ (Class)candidateWithType:;
+ (id)candidateItemWithType:shareModel:;
+ (BOOL)replaceOtherDataSource;
+ (BOOL)enable;
+ (id)decorator;
+ (id)configInfo;
@end
