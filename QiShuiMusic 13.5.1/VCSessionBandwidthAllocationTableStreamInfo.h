@interface VCSessionBandwidthAllocationTableStreamInfo : NSObject
@property (nonatomic) NSArray sortedEntries;
@property (nonatomic) NSMutableDictionary qualityIndexToTableEntry;
- (id)init;
- (void)dealloc;
- (BOOL)addTableEntry:;
- (id)entryForQualityIndex:;
- (id)sortedEntries;
- (id)qualityIndexToTableEntry;
@end
