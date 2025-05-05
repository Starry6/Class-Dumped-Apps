@interface CKResourceAlgorithmCache : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)addOrUpdateCache:;
- (BOOL)canHandle:;
- (id)ckDBQueue;
- (BOOL)deleteCache:;
- (id)generateConditionMap:;
- (id)queryAllCache;
- (id)queryCache:;
- (void)setCkDBQueue:;
- (void).cxx_destruct;
@end
