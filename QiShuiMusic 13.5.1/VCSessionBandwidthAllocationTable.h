@interface VCSessionBandwidthAllocationTable : VCObject
@property (nonatomic) NSDictionary audioOnlyBitrateToStreamIDsTable;
@property (nonatomic) NSDictionary audioVideoBitrateToStreamIDsTable;
@property (nonatomic) NSDictionary videoOnlyBitrateToStreamIDsTable;
@property (nonatomic) NSDictionary videoStreamIdToRepairStreamIdMap;
- (void)dealloc;
- (id)initWithType:;
- (id)entryForStreamID:;
- (void)addBandwidthAllocationTableEntry:;
- (id)tableEntriesForStreamToken:;
- (BOOL)shouldUseRepairBitrateForEntry:isRedundancyEnabled:isRedundancyEnabledFor720Stream:;
- (id)newAggregatedBandwidthTableWithRedundancy:redundancyEnabledFor720Stream:enableMap:;
- (BOOL)shouldAppendEntry:screenEncoderGroups:;
- (void)cleanupStreamTokenEntries:currentNetworkBitrate:isRedundancyEnabled:screenEncoderGroups:;
- (void)appendEntry:streamTokenEntries:currentNetworkBitrate:shouldUseRepairBitrate:screenEncoderGroups:;
- (BOOL)shouldAddBackupEntry:referenceTable:referenceQualityIndices:;
- (void)printTable:;
- (id)audioOnlyBitrateToStreamIDsTable;
- (id)audioVideoBitrateToStreamIDsTable;
- (id)videoOnlyBitrateToStreamIDsTable;
- (id)videoStreamIdToRepairStreamIdMap;
@end
