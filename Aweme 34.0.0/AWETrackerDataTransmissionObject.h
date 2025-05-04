@interface AWETrackerDataTransmissionObject : NSObject
@property (nonatomic) NSMutableDictionary event2BlockDict;
@property (nonatomic) AWETrackerDataTransmissionContainer objContainer;
@property (nonatomic) NSString dataNodeClassStr;
@property (nonatomic) Q dataNodeInstanceAddr;
- (void)setDataNodeClassStr:;
- (void)setDataNodeInstanceAddr:;
- (id)dataNodeClassStr;
- (void)applyBlockWithEvent:params:trackerContext:;
- (void)setObjContainer:;
- (id)saveBlockForEvent:withBlockObj:;
- (id)objContainer;
- (unsigned long long)dataNodeInstanceAddr;
- (id)event2BlockDict;
- (id)getBlockForEvent:;
- (void)setEvent2BlockDict:;
- (id)init;
- (void).cxx_destruct;
@end
