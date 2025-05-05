@interface IDSCKModifyRecordsOperation : IDSCKDatabaseOperation
@property (nonatomic) @? modifyRecordsCompletionBlock;
@property (nonatomic) q savePolicy;
- (void)setSavePolicy:;
- (void)setModifyRecordsCompletionBlock:;
- (long long)savePolicy;
- (id)modifyRecordsCompletionBlock;
- (void).cxx_destruct;
+ (id)alloc;
+ (Class)__class;
@end
