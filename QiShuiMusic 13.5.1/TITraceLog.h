@interface TITraceLog : NSObject
@property (nonatomic) NSMutableDictionary recordEntryCache;
@property (nonatomic) NSString logContents;
- (void)enumerateRecordsWithBlock:;
- (void).cxx_destruct;
- (id)initWithLogContents:;
- (void)recordMatchingUUID:;
- (id)recordStringMatchingUUID:;
- (void)recordMatchingTypologyRecord:;
- (id)recordStringMatchingTypologyRecord:;
- (id)recordEntryCache;
- (void)enumerateTextRecordEntriesUsingBlock:;
- (void)setRecordEntryCache:;
- (id)logContents;
@end
