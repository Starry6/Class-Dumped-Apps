@interface AWETrackerDataTransmissionMonitor : NSObject
@property (nonatomic) NSMutableDictionary transmissionNetworkNodes;
@property (nonatomic) NSMutableDictionary transmissionBlocks;
@property (nonatomic) NSMutableDictionary transmissionApplyRecordsMap;
- (void)monitoredDidApplyTransmissionWithChain:trackerContext:applyResult:applyDuration:;
- (void)monitoredBlock:savedForEvent:didAttachedtoObj:;
- (id)transmissionNetworkNodes;
- (id)transmissionApplyRecordsMap;
- (id)transmissionBlocks;
- (void)monitoredObject:didSetPreDataNode:;
- (id)getTransNodeFor:;
- (id)getToLeafChainsForTransNode:;
- (void)monitoredObject:didGetTransmissionForEvent:;
- (void)setTransmissionNetworkNodes:;
- (void)setTransmissionBlocks:;
- (void)setTransmissionApplyRecordsMap:;
- (id)init;
- (void).cxx_destruct;
+ (void)monitoredDidApplyTransmissionWithChain:trackerContext:applyResult:applyDuration:;
+ (void)monitoredBlock:savedForEvent:didAttachedtoObj:;
+ (id)transmissionNetworkNodes;
+ (id)transmissionApplyRecordsMap;
+ (id)transmissionBlocks;
+ (void)monitoredObject:didSetPreDataNode:;
+ (id)visitTable;
+ (id)sharedInstance;
+ (void)clearAll;
@end
