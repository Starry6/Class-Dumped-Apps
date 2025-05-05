@interface CPLPushChangeTasks : NSObject
@property (nonatomic) BOOL hasTasks;
- (id)_descriptionFromTasksByType:;
- (id)invalidRecordIdentifiers;
- (void)_commitTasks;
- (void)enumerateScopedTasksWithBlock:;
- (void)enumerateTasksWithBlock:;
- (id)initEmpty;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)hasTasks;
- (id)invalidRecordScopedIdentifiers;
- (void).cxx_destruct;
- (id)description;
- (void)addTask:forRecordWithScopedIdentifier:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)descriptionForTaskType:;
@end
