@interface CKXORCWriter : CKXWriterBase
@property (nonatomic) CKDSWritableStorage storage;
@property (nonatomic) <CKXORCHelpers> helpers;
@property (nonatomic) CKXORCWriterOptions options;
@property (nonatomic) Q rootStructToken;
@property (nonatomic) Q startingRowForCurrentBatch;
@property (nonatomic) Q commitCount;
@property (nonatomic) NSError writeError;
- (void)setStorage:;
- (void)setWriteError:;
- (id)options;
- (id)storage;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)writeError;
- (id)initWithSchema:;
- (unsigned long long)valueSizeForField:;
- (BOOL)size:error:;
- (BOOL)setWritableStorage:error:;
- (id)beginRootStructWithType:error:;
- (id)beginReferencedStructForReference:inStruct:;
- (id)beginReferencedListForReference:inStruct:;
- (id)beginAppendedListStructInList:;
- (void)setData:withEncoding:forField:inStruct:;
- (void)setData:withLength:forList:;
- (void)commitStruct:;
- (BOOL)flushWithError:;
- (id)initWithSchema:helpers:options:;
- (id)structColumnForStruct:;
- (id)structReferenceColumnForReference:;
- (id)listColumnForReference:;
- (id)valueColumnForField:;
- (id)helpers;
- (void)resetColumnNulls:inRange:;
- (BOOL)createWriterWithError:;
- (void)updateNumberOfElementsForCurrentBatch;
- (BOOL)commitBatchWithError:;
- (BOOL)commitBatchIfNeededWithError:;
- (BOOL)growCurrentBatchToIncludeBatchOffset:;
- (BOOL)growCurrentBatchToIncludeRow:;
- (unsigned long long)offsetInCurrentBatchForRow:;
- (void)expandColumn:includingBatchOffset:;
- (void)expandColumn:includingRow:;
- (id)appendRowForStruct:;
- (void)enumerateAllColumnsWithBlock:;
- (id)rootColumn;
- (void)_appendData:withValueSize:length:toRow:toList:;
- (unsigned long long)rootStructToken;
- (void)setRootStructToken:;
- (unsigned long long)startingRowForCurrentBatch;
- (void)setStartingRowForCurrentBatch:;
- (unsigned long long)commitCount;
- (void)setCommitCount:;
@end
