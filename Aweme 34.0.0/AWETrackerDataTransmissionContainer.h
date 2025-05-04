@interface AWETrackerDataTransmissionContainer : NSObject
@property (nonatomic) NSObject containerHolder;
@property (nonatomic) AWETrackerDataTransmissionObject dataObject;
- (id)transmissionChainForEvent:;
- (id)applyTransmissionForEvent:withTrackerContext:;
- (id)containerHolder;
- (void)setContainerHolder:;
- (id)saveParamsBlockForEvent:withBlockObj:;
- (id)init;
- (void).cxx_destruct;
- (id)dataObject;
- (void)setDataObject:;
+ (void)strategyWhenApplyTimeoutForEvent:withChain:withTimeout:;
+ (id)applyTransmissionWithChain:withTrackerContext:;
@end
