@interface PLPositionalTableEntries : NSObject
@property (nonatomic) Q entryLength;
@property (nonatomic) NSIndexSet readIndexes;
- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)entryLength;
- (void)enumerateIndexes:;
- (id)initWithBuffers:forIndexes:entryLength:;
- (id)readIndexes;
@end
