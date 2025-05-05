@interface NLParsecDataManager : NSObject
@property (nonatomic) NSData serializableData;
- (void)dealloc;
- (id)getEntries;
- (void)addEntry:domain:metaData:;
- (void)insertEntry:;
- (id)serializableData;
+ (BOOL)supportsDomain:;
+ (void)enumerateEntriesForSerializedData:withBlock:;
+ (void)notifyStoredSerializedDataChanged;
+ (unsigned short)maxNumberOfPOIsAllowed;
@end
