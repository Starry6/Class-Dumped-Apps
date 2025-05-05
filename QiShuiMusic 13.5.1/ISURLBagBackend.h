@interface ISURLBagBackend : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> accessQueue;
@property (nonatomic) NSMutableDictionary bagValuesDictionary;
@property (nonatomic) SSDoubleLinkedList bagValuesList;
- (void)setAccessQueue:;
- (id)accessQueue;
- (id)init;
- (void)setBagValuesDictionary:;
- (void)setBagValuesList:;
- (id)_bagValuesMapTableWithInitialValues:;
- (id)diagnostics;
- (id)valueForKey:forBagWithKey:;
- (void).cxx_destruct;
- (id)deltaDictionaryRepresentationForBagWithKey:;
- (id)description;
- (id)_valueForKey:forBagValuesNode:;
- (void)removeBagValuesForBagWithKey:;
- (void)addBagValues:forBagWithKey:;
- (id)bagValuesList;
- (id)dictionaryRepresentationForBagWithKey:;
- (id)bagValuesDictionary;
+ (BOOL)_bagValue:equalsBagValue:;
@end
