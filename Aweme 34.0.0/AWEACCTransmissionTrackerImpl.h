@interface AWEACCTransmissionTrackerImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)acc_addTransmissionNodeInfoForEvent:addToObject:withParams:;
- (id)acc_applyTransmissionWithAllNodesForEvent:forObject:;
- (id)acc_applyTransmissionForEvent:withSpecificNodeNameList:forObject:;
- (void)acc_bindPreDataNode:toNode:;
@end
