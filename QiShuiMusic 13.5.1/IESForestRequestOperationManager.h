@interface IESForestRequestOperationManager : NSObject
@property (nonatomic) NSMutableDictionary operationsDict;
@property (nonatomic) NSLock operationDictLock;
@property (nonatomic) NSMutableArray operationsArray;
@property (nonatomic) NSLock operationArrayLock;
@property (nonatomic) IESForestKit forestKit;
- (id)operationsArray;
- (id)_operationWithRequest:isStream:operationDidCreated:;
- (id)forestKit;
- (id)operationArrayLock;
- (id)operationDictLock;
- (id)operationWithRequest:completion:;
- (id)operationWithRequest:redirectHandler:headerHandler:dataHandler:completionHandler:;
- (id)operationsDict;
- (void)setForestKit:;
- (void)setOperationArrayLock:;
- (void)setOperationDictLock:;
- (void)setOperationsArray:;
- (void)setOperationsDict:;
- (id)init;
- (void)removeOperation:;
- (void).cxx_destruct;
@end
