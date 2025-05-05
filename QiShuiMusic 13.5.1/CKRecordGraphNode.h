@interface CKRecordGraphNode : NSObject
@property (nonatomic) NSMutableSet edges;
@property (nonatomic) NSMutableSet indegrees;
@property (nonatomic) Q indegree;
@property (nonatomic) CKRecord record;
- (id)init;
- (id)record;
- (void)setEdges:;
- (id)indegrees;
- (unsigned long long)hash;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (void)setRecord:;
- (unsigned long long)indegree;
- (id)description;
- (id)edges;
- (BOOL)isEqual:;
@end
