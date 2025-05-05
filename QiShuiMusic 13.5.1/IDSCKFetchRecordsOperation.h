@interface IDSCKFetchRecordsOperation : IDSCKDatabaseOperation
@property (nonatomic) NSArray recordIDs;
@property (nonatomic) NSArray desiredKeys;
@property (nonatomic) @? perRecordProgressBlock;
@property (nonatomic) @? perRecordCompletionBlock;
@property (nonatomic) @? fetchRecordsCompletionBlock;
- (void)setPerRecordCompletionBlock:;
- (id)perRecordProgressBlock;
- (id)fetchRecordsCompletionBlock;
- (void)setRecordIDs:;
- (void)setDesiredKeys:;
- (void)setPerRecordProgressBlock:;
- (id)recordIDs;
- (void)setFetchRecordsCompletionBlock:;
- (id)desiredKeys;
- (id)perRecordCompletionBlock;
- (void).cxx_destruct;
+ (id)alloc;
+ (Class)__class;
@end
